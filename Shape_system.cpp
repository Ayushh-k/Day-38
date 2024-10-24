#include <iostream>
#include <cmath>
using namespace std;

// Abstract class Shape
class Shape
{
public:
    virtual double area() const = 0;      // Pure virtual function for area
    virtual double perimeter() const = 0; // Pure virtual function for perimeter
    virtual ~Shape() {}                   // Virtual destructor
};

// Derived class Circle
class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override
    {
        return M_PI * radius * radius;
    }

    double perimeter() const override
    {
        return 2 * M_PI * radius;
    }
};

// Derived class Rectangle
class Rectangle : public Shape
{
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const override
    {
        return width * height;
    }

    double perimeter() const override
    {
        return 2 * (width + height);
    }
};

int main()
{
    Shape *shapes[2];

    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);

    for (int i = 0; i < 2; ++i)
    {
        cout << "Shape " << i + 1 << " area: " << shapes[i]->area() << endl;
        cout << "Shape " << i + 1 << " perimeter: " << shapes[i]->perimeter() << endl;
        delete shapes[i]; // Clean up allocated memory
    }

    return 0;
}
