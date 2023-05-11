#include <iostream>
using namespace std;

class Shape
{
protected:
    double b, h;

public:
    void Get_Data(double base, double height)
    {
        b = base;
        h = height;
    }

    virtual void Display_Area()
    {
    }
};

class Triangle : public Shape
{
    void Display_Area()
    {
        cout << "Area of triangle =" << 0.5 * (b * h) << endl;
    }
};

class Parallelogram : public Shape
{
    void Display_Area()
    {
        cout << "Area of Parallelogram =" << (b * h) << endl;
    }
};

class Rectangle : public Shape
{
    void Display_Area()
    {
        cout << "Area of rectangle =" << (b * h) << endl;
    }
};

int main()
{
    double base, height;
    cout << "Input two length :";
    cin >> base >> height;

    Shape *object;

    Triangle t;
    Parallelogram p;
    Rectangle r;

    object = &t;
    t.Get_Data(base, height);
    object->Display_Area();

    object = &p;
    p.Get_Data(base, height);
    object->Display_Area();

    object = &r;
    r.Get_Data(base, height);
    object->Display_Area();

    return 0;
}