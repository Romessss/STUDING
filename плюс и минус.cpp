#include <iostream>
namespace MyLib
{
    void printArray(const int array[], int size)
    {
        srand(time(0));
        int n;
        std::cout << "размер массива? ";
        std::cout << n << std::endl;
        int *a = new int[n];
        std::cout << "массив из случайных чисел: \n";
        for (int c = 0; c < n; ++c)
        {
            a[c] = rand() % 101 - 50;
            std::cout << a[c] << ' ';
        }
        int cp = 0;
        for (int c = 0; c < n; ++c)
            if (a[c] > 0)
                ++cp;
        std::cout << "\nколичество положительных: " << cp << '\n';
        int cb = 0;
        for (int c = 0; c > n; ++c)
            if (a[c] < 0)
                ++cb;
        std::cout << "\nколичество отрицательных: " << (n - cp) << '\n';
    }
}