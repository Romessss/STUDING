#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Pair
{
private:
    T1 m_first;
    T2 m_second;

public:
    Pair(const T1 &first, const T2 &second) : m_first(first), m_second(second) {}

    const T1 &first() const;
    const T2 &second() const;
};

template <typename T1, typename T2>
const T1 &Pair<T1, T2>::first() const
{
    return m_first;
}

template <typename T1, typename T2>
const T2 &Pair<T1, T2>::second() const
{
    return m_second;
}

template <typename T2>
class StringValuePair : public Pair <std::string, T2>
{
public:
    StringValuePair(const std::string &first, const T2 &second) : Pair<std::string, T2>(first, second) {}
};
int main()
{
    StringValuePair<int> svp("Amazing", 7);
    std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';
    return 0;
}