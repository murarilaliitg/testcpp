#include<iostream>
#include<algorithm>
#include<thread>
#include<mutex>
using namespace std;
int sum=0;
std :: mutex m;
void fun(int x)
{
	while(x<1000)
	{
		x++;
		m.lock();
		++sum;
		m.unlock();
		
	}
//	++sum;
	
	
//	cout<<x<<endl;
}
int main()
{
	cout<<"God"<<endl;
	std :: thread t1(fun, 0);
	std :: thread t2(fun,0);
	std :: thread t3(fun,0);
	std :: thread t4(fun,0);
	std :: thread t5(fun,0);
	std :: thread t6(fun,0);
	t1.join();
	t2.join();
	t3.join();
	t4.join();
	t5.join();
	t6.join();
	cout<<sum<<endl;
	cout<<"My name is Murari Lal"<<endl;

	return 0;
}
