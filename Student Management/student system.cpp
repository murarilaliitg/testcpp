#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Student{
	private:
		int rollno;
		string name;
		char gender;
		int age;
		int std;
	public:
		void getData()
		{
			cout<<"Enter Student Details \n";
			cout<<"Roll No. :";
			cin>>rollno;
			cout<<"Name     :";
			cin>>name;
			cout<<"Age     :";
			cin>>age;
			cout<<"Gender     :";
			cin>>gender;
			cout<<"standard     :";
			cin>>std;
		}
		void heading()
		{
			cout.setf(ios::left);
			cout<<setw(10)<<"Roll No.";
			cout<<setw(20)<<"Name";
			cout<<setw(20)<<"Gender";
			cout<<setw(5)<<"Age";
			cout<<setw(5)<<"std";
			cout<<endl;
		}
		void listData()
		{
			cout.setf(ios::left);
			cout<<setw(10)<<rollno;
			cout<<setw(20)<<name;
			cout<<setw(20)<<gender;
			cout<<setw(5)<<age;
			cout<<setw(5)<<std;
			cout<<endl;
		}
		
};
int main()
{
	
	Student st[3];
	int i;
	for(i=0;i<3;i++)
	{
		cout<<"Enter the details of record No. :"<<i+1<<endl;
		st[i].getData();
	}
	cout<<endl<<endl;
	st[0].heading();
	for(i=0;i<3;i++)
	{	
		st[i].listData();
	}
}
