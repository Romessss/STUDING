#include <iostream>
#include <string>
using namespace std;

class Fruit
{
public:
    string name;
    string color;

    Fruit(string name, string color) : name(move(name)), color(move(color)) {}
};

class Banana : public Fruit
{
public:
    Banana(string name = "Banana", string color = "Yellow") : Fruit(move(name), move(color)) {}
};

class Apple : public Fruit
{
public:
    Apple(string name = "Apple", string color = "Red") : Fruit(move(name), move(color)) {}
};

class GrannySmith : public Apple
{
public:
    GrannySmith(string name = "Granny Smith", string color = "Green") : Apple(move(name), move(color)) {}
};



int main()
{
    Apple a("apple");
    Banana b;
    GrannySmith c;

    cout << "My " << a.name << " is " << a.color << ".\n";
    cout << "My " << b.name << " is " << b.color << ".\n";
    cout << "My " << c.name << " is " << c.color << ".\n";

    return 0;
}