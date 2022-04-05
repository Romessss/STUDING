#include <iostream>
#include <string>
using namespace std;

class Parent
{
protected:
    string m_name;

public:
    Parent(string name) : m_name(name) {}
    virtual ~Parent() {}
};

class Child : public Parent
{
protected:
    string m_patronymic;

public:
    Child(string name, string patronymic) : Parent(name), m_patronymic(patronymic) {}
    const string &Getname() { return m_name; }
};

int main()
{
    Parent* p = new Child("Alex", "Mike");

    Child* ch = dynamic_cast<Child*>(p);

    cout << ch->Getname() << endl;

    delete p;
    return 0;
}
