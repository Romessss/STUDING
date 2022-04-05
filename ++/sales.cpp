#include <iostream>

int main()
{
    int month, day, total_days;
    int days_per_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    std::cout << "\nEntre month: ";
    std::cin >> month;
    std::cout << "\nEntre day: ";
    std::cin >> day;
    total_days = day;
    for (int j = 0; j < month - 1; j++)
        total_days += days_per_month[j];
    std::cout << "sum of days after begining of the year: " << total_days << std::endl;
    return 0;
}