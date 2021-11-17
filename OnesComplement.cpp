#include <iostream>
using namespace std;
 
class binary 
{
    string s;
    public :
    void read(void);
    void onesComplement(void);
};

void binary::read(void)
{
    cout<<"Enter a Binary Number\n";
    cin>>s;
}

void binary::onesComplement(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else 
        {
            s.at(i)='0';
        }
    }
    cout<<"One's compliment of given Number is :\n";
    cout<<s;
}

int main()
{
    binary b;
    b.read();
    b.onesComplement();
    return 0;
}