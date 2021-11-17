#include <iostream>
using namespace std;

class employee
{
    int id;
    int count;
    public:
    void setData(void)
    {
        cout<<"Enter the ID\n";
        cin>>id;
    }
    void getData(void)
    {
        cout<<"The Id of the employee is "<<id;
    }
};

int main()
{
    employee ankit,vinod,harsh;
    ankit.setData();
    ankit.getData();

    harsh.setData();
    harsh.getData();

    vinod.setData();
    vinod.getData();
}