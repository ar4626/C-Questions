//Program to derive a class publicly from base class

#include<iostream>
using namespace std;

class A                     // BASE CLASS
{
    public:
    int x=10;
};
class B :public A            //DERIVED CLASS 
{
    public:
    int y=10;

};

int main()
{
    B b;
    cout<<"Member of Class A "<<b.x<<endl;
    cout<<"Member of Class B "<<b.y<<endl;
}