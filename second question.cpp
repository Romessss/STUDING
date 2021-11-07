#include <iostream>
using namespace std;
int main()
{
    int raws = 4;
    int cols = 4;

    int **arr = new int *[raws];

    for (int i = 0; i < raws; i++)
    {
        arr[i] = new int[cols];
    }

    for (int i = 0; i < raws; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 20;
        }
    }

    for (int i = 0; i < raws; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
        
    }

    for (int i = 0; i < raws; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}