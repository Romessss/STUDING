#include <iostream>
#include <limits>
using namespace std;

void exercise_1()
{
    int num;

    std::cout << "Введите целое число: ";

    while (true)
    {
        std::cin >> num;

        if (std::cin.good() && std::cin.peek() == '\n')
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            break;
        }
        std::cin.clear();
        std::cout << "Введено некорректное число. Попробуйте ещё раз: ";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::cout << "Введено целое число " << num << std::endl;
}
