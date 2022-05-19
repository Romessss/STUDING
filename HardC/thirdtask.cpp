#include <iostream>
#include <iomanip>
#include "thirdtask.hpp"
#include "secondtask.hpp"
using namespace std;

void exercise_3()
{
    Matrix m(4);
    m.fillRandom();

    for (const double &i : m)
    {
        cout << setw(5) << i;
    }

    cout << endl;
}
