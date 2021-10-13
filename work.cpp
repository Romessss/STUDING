#include <iostream>
int main()
{
    int *ptrArr, n;

    std::cout << "Enter size of your array: ";
    std::cin >> n;
    ptrArr = new int[n];
    for (int i = 0; i < n; i++)
    {
        ptrArr[i] = 1 << i;
        std::cout << ptrArr[i] << "  ";
    }
    delete[] ptrArr;
    return 0;
}