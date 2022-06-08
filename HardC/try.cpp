#include <iostream>
#include <vector>
using namespace std;
int square_sum(const std::vector<int>& numbers)
{
    int n = 0;
    for (auto x:numbers) n+= (x*x);
    return n;
}