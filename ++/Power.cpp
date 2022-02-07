#include <iostream>
#include <cmath>
using namespace std;

class Power
{
public:
    void setValues();

    void print();

private:
    float a;

    double b;
};

void Power::setValues()
{
    cin >> a >> b;
}
void Power::print()
{
    cout << pow(a, b);
}

int main()
{
    Power a;
    a.setValues();
    a.print();

    return 0;
}
