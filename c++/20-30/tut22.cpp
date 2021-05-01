// memory allocation in c++

// memory allocation for data member of each object is different
// but for each and every functions they share common memory.

#include <iostream>

using namespace std;
class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop::setPrice(void)
{
    cout << "Enter the id" << endl;
    cin >> itemId[counter];
    cout << "Price of the item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)

    {
        cout << "The price of item " << itemId[i] << "price is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();
    return 0;
}