#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void displayPrice(void);
    void setPrice(void);
};
void shop::setPrice(void)
{
    cout << "Enter Id of your item\n";
    cin >> itemId[counter];
    cout << "Enter Price of your item\n";
    cin >> itemPrice[counter];
    counter++;
}
void shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The prive of Item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();
    return 0;
}