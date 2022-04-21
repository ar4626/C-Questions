#include <iostream>
using namespace std;

class number
{
    public:
    int x,y;
    number(){}
    number(int a,int b)
    {
        x=a;
        y=b;
    }
    void show()
    {
        cout<<"\nx="<<x<<" y="<<y;
    }

};
int main()
{
    number a(2,5),b(4,3),c;
    a.show();
    b.show();
    c.x=a.x+b.x;        //Addition of two object
    c.y=a.y+b.y;        //Using two Member variables
    c.show();
}