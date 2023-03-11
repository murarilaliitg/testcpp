#include <iostream>
#include<vector>
#include<cstring>
#include<thread>
#include<mutex>
#include<chrono>
using namespace std;
class BixTeam
{
    int x, y; 
    public:
    BixTeam(int xx)
    {
        x = ++xx;
    }
    void Display()
    {
        cout<< --x << " ";
    }
};
int main()
{
    BixTeam objBT(45);
    objBT.Display();
    int *p = (int*)&objBT;
    *p = 23;
    objBT.Display();
    return 0; 
}
