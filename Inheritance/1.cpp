//Program to derive a class publicly from base class.Declare the base class member under private section

#include <iostream>
using namespace std;

class A                    //BASE CLASS
{
    private :
    int x;
    public:
    A()
    {
        x=20;
    }
    void showx()
    {
        cout<<"X= "<<x<<endl;
    }

};
class B :public A         //DERIVED CLASS
{
    public:
    int y;
    B()
    {
        y=10;
    }
    void show()
    {
        showx();
        cout<<"Y= "<<y;
    }

};

int main()
{
    B b;
    b.show();
}
