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
int main()
{
    Pair<int, double> p1(6, 7.8);
    cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

    const Pair<double, int> p2(3.4, 5);
    cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

    return 0;
}