//Program to show value of different data types using overloaded constructor 

#include <iostream>
#include <conio.h>
using namespace std;
class data
{
    public:
    data(char c)
    {
        cout<<"c="<<c<<" Size in bytes: "<<sizeof(c)<<endl;
        
    }
    data(int c)
    {
        cout<<"c="<<c<<" Size in bytes: "<<sizeof(c)<<endl;

    }
    data(double c)
    {
        cout<<"c="<<c<<" Size in bytes: "<<sizeof(c)<<endl;

    }
};
int main ()
{
    data h('A'),i(8),j(1.02);
    return 0;
}
