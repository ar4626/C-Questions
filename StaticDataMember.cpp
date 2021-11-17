#include<iostream>
using namespace std;

class employee
{
    int id;
    static int count;
    public:
    void setData()
    {
        cout<<"Enter the ID: \n";
        cin>>id;
        count++;
    }
    void getData()
    {
        cout<<"The id of this employee "<<id<<" and the employee number is "<<count<<endl;
    }
};
int employee :: count;     //Default value is 0
int main()
{
    employee ankit,vinod,aman;
    ankit.setData();
    ankit.getData();

    vinod.setData();
    vinod.getData();

    aman.setData();
    aman.getData();
    return 0;
}