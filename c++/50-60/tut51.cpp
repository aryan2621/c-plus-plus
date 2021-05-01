#include <iostream>

using namespace std;
class Shop
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }

    void getData()
    {
        cout << "Code of the item is " << id << endl;
        cout << "Price of the item is " << price << endl;
    }
};
int main()
{
    Shop *ptr = new Shop[2];
    int a;
    float b;
    Shop *ptrTemp = ptr;
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter Id and price of item" << i + 1;
        cin >> a >> b;
        ptr->setData(a, b);
        ptr++;
    }
    for (int i = 0; i < 2; i++)

    {
        cout << "Item number :" << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}