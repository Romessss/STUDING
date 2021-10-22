#include <iostream>
#define ARRAY_SIZE 10

int main(int argc, char *argv[])
{
    int m;
    int n;
    bool isPrime = true;

    std::cout << "введите число: ";
    std::cin >> n;

    for (int i = 2; i < ARRAY_SIZE; i++)
    if (i < 0)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;
    return 0;
}