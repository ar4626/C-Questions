#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "Your Roll No is " << roll_no << endl;
    }
};

class test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }

    void print_marks(void)
    {
        cout << "Your result is here :" << endl
             << "Maths : " << maths << endl
             << "Physics :" << physics << endl;
    }
};

class sport : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }

    void print_score(void)
    {
        cout << "Your PT score is " << score << endl;
    }
};

class result : public test, public sport
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout<<"Your totol score is " <<total<<endl;
    }
};

int main()
{
    result ankit;
    ankit.set_number(1194);
    ankit.set_marks(78.9,99.8);
    ankit.set_score(9.0);
    ankit.display();
    return 0;
}