#include <iostream>
using namespace std;

class number
{
public:
    int x, y;
    number(){}
    number(int a, int b)
    {
        x = a;
        y = b;
    }

    void show()
    {
        cout<<"\nX= "<<x<<"\nY= "<<y<<endl; 
    }

    // number operator +(number d)
    // {
    //     number t;
    //     t.x=x+d.x;
    //     t.y=y+d.y;
    //     return t;
    // }

    number operator ++ (void)
    {
        ++x;
        ++y;
    }
};
int main()
{
    number a(2,3),b(4,6);
    a.show();
    ++a;
    a.show();
    b.show();
    ++b;
    b.show();
    // c=a+b;
    // c.show();
    return 0;
}
