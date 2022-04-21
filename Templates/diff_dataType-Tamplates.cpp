#include <iostream>
#include <conio.h>
using namespace std;

template<class T>
class data
{
    public:
    data(T c)
    {
        cout<<"c="<<c<<" Size in bytes: "<<sizeof(c)<<endl;
    }
};

int main()
{
    data <char> h('A');
    data <int> i(12);
    data <double>j(10.2);
return 0;

}