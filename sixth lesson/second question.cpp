#include <iostream>
using namespace std;

int main()
{
    int numb[] = {1, 1, 0, 0, 1, 0, 1, 1, 0, 0};
    for (int j = 0; j < 10; j++)
        cout << numb[j] << endl;
    for (int i = 0; i < 10; i++)
        if (numb[i] == 1)
        {
            numb[i] = 0;
        }
        else
            numb[i] = 1;
    for (int i = 0; i < 10; i++)
        cout << numb[i] << endl;
    return 0;
}