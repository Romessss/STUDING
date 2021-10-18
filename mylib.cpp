#include <iostream>
namespace MyLib
{
  void printArray(const int array[], int size)  // Реализация функции
    {
        for (int i = 0; i < size; i++)
            std::cout << array[i] << " ";
    }
}