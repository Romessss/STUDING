#include <iostream>
using namespace std;
int main()
{
    int array[8];
    array[0] = 1;

    for (int j = 1; j < 8; j++)
    {
        array[j] = (array[j - 1] + 3);
    }
    for (int j = 0; j < 8; j++)
        cout << array[j] << endl;

    return 0;
}
