#include <iostream>

using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout << "The point is " << x << "," << y << endl;
    }
};

int main()
{
    Point p1(1, 2), p2(6, 8);
    p1.displayPoint();
    p2.displayPoint();

    return 0;
}