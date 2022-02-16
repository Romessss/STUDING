#include <iostream>

using namespace std;

class Figure
{
public:
    virtual void area() = 0;
};

class Parallelogram : public Figure
{
protected:
    int base;   
    int height; 
public:
    Parallelogram(int value_base, int value_height) : base(value_base), height(value_height) {}
    void area() override
    {
        cout << "Площадь параллелограмма:" << base * height << endl;
    }
};

class Circle : public Figure
{
    double radius;
    double P;

public:
    Circle(double value_radius) : radius(value_radius) {}
    void area() override
    {
        cout << "Площадь круга: " << 3.1415 * (radius * radius) << endl;
    }
};

class Rectangle : public Parallelogram
{
public:
    Rectangle(int value_base, int value_height) : Parallelogram(value_base, value_height) {}
    void area() override
    {
        cout << "Площадь треуголника: " << base * height << endl;
    }
};

class Square : public Parallelogram
{
public:
    Square(int value_base, int value_height) : Parallelogram(value_base, value_height) {}

    void area() override
    {
        cout << "Площадь квадрата:" << base * height << endl;
    }
};

class Rhombus : public Parallelogram
{
public:
    Rhombus(int value_base, int value_height) : Parallelogram(value_base, value_height) {}
    void area() override
    {
        cout << "Площадь ромба: " << base * height << endl;
    }
};

int main()
{
    return 0;
}