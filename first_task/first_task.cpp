#include <iostream>
using namespace std;

int main()

    {
    int n , i ;
    bool isPrime = true;

    cout << "Введите число :" ;
    cin >>n;

    for(i = 2; i <= n / 2; ++i)
    {
        if(n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if(isPrime)
        cout << "Это простое число" << endl;
    else
        cout << "Это не простое число" << endl;

        return 0 ;
   
    }