#include <iostream>
using namespace std;

class number
{
public:
    int x, y;
    number() {}
    number(int a, int b)
    {
        x = a;
        y = b;
    }
    void show()
    {
        cout << "\nx=" << x << " y=" << y;
    }
    number operator+(number D)
    {
        number T;
        T.x = x + D.x;
        T.y = y + D.y;
        return T;
    }
};

int main()
{
    number a(2,3),b(4,5),c;
    a.show();
    b.show();
    c=a+b;      //Addition using Operator +
    c.show();
}
