#include <iostream>
#include "mylib.h"
int main(int argc, char* argv[])
{
    std::cout << "Invoke printArray fun" << std::endl;
    const int size = 4;
    int arr[size] = { 1, 2, 3, 4 };
    MyLib::printArray(arr, size);             // Вызываем функция из другого модуля
    return 0;
}