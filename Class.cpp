#include <iostream>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void onescomplement(void);
};

void binary ::read(void)
{
    cout<<"Enter a Binary Number\n";
    cin>>s;
}

void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Incorrect binary Format\n";
            exit(0);
        }
    }
    cout<<"Correct Binary Format\n";
    
}

void binary ::onescomplement(void)
{
    for (int i = 0; i <s.length(); i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        if(s.at(i)=='1')
        {
            s.at(i)='0';
        }
    }
    cout<<s;
    
}

int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.onescomplement();
    return 0;
}