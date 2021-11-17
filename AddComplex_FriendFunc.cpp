#include<iostream>
using namespace std;
class complex
{
    float a,b;
    public:
        void get()
        {
            cout<<endl<<"Enter value for A=";
            cin>>a>>b;
        }
        void disp()
        {
            cout<<a<<"+"<<b<<"i\n";
        }
    friend complex sum(complex,complex);
};
complex sum(complex c1,complex c2)
{
    complex c3;
    c3.a=c1.a+c2.a;
    c3.b=c1.b+c2.b;
    return c3;
}
int main()
{
    complex x,y,z;
    x.get();
    x.disp();
    y.get();
    y.disp();
    cout<<"Result\n";
    z=sum(x,y);
    z.disp();
    return 0;
}