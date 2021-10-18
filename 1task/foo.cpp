#include <iostream>
void printArray(const int array[], int size)  // Реализация функции (вывод массива на экран)
{
    for (int i = 0; i < size; i++)
        std::cout << array[i] << " ";
}