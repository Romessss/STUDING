#include <iostream>
#include <cstdlib> // для функций rand()
using namespace std;

double InitArray(int* arr, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
    return true;
}

int main()
{
    const int mysize = 1000;
    int myarr[mysize];
    if (InitArray(myarr, mysize))
    {
        cout << myarr << endl;
    }
    return 0;
}