// operator and opertor overlaoding

// we already saw various operator endl ," ",=,<,>,<<;
// in opertor overloading we change the default behaviour
// of the opeartor
// very important.

#include <iostream>

using namespace std;

struct Vector2
{
    float x, y;
    Vector2(float x, float y) : x(x), y(y) {}

    Vector2 operator+(const Vector2 &other) const
    {
        return Vector2(x + other.x, y + other.y);
    }

    Vector2 operator*(const Vector2 &other) const
    {
        return Vector2(x * other.x, y * other.y);
    }
};

// Vector2 Add(const Vector2 &other) const
// {
//     return Vector2(x + other.x, y + other.y);
// }

// Vector2 Multiplly(const Vector2 &other) const
// {
//     return Vector2(x * other.x, y * other.y);
// }

int main()
{
    Vector2 position(4.0f, 4.0f);
    Vector2 speed(0.5f, 0.5f);
    Vector2 powerup(1.1f, 1.1f);

    // Vector2 result = position.Add(speed.Multiplly(powerup));
    Vector2 result = position + speed * powerup;

    return 0;
}