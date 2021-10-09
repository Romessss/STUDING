#include <iostream>
int main()

{
    int n ;
    int i ;
    bool isPrime = true;

    std::cout << "Введите число :" ;
    std::cin >> n;

    for(i = 2; i <= n / 2; ++i)
    {
        if(n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if(isPrime)
        std::cout << "Это простое число" << std::endl;
    else
        std::cout << "Это не простое число" << std::endl;

        return 0 ;

}