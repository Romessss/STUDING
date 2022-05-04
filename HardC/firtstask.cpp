#include <iostream>
#include <list>

void printList(std::list<float> &n)
{
    std::cout << "{";
    for (std::list<float>::const_iterator iter = n.begin(); iter != n.end(); iter++)
    {
        std::cout << *iter << (next(iter,1) == n.end() ? "" : ", ");
    }
    std::cout << "}";   
}

void pushBackList (std::list<float> &n)
{
    float sum = 0;
    for(const float &value : n)
    {
        sum += value;
    }
    n.push_back(sum/n.size());
}
void firststask()
{
std::list<float> n {47.55, 25.26, 46.32, 73.12};
size_t countCycle = 1;

for (size_t i = 0; i < countCycle; ++i)
{
    if(i % 1 == 0)
    {
        printList(n);
    }
    pushBackList(n);
}
printList(n);
}

int main()
{
    firststask();
    return 0;
}