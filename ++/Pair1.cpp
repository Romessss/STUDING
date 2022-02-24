#include <iostream>
using namespace std;

template <typename T>
class Pair1
{
private:
    T m_first;
    T m_second;

public:
    Pair1(const T &first, const T &second) : m_first(first), m_second(second) {}

    const T &first() const;
    const T &second() const;
};

template <typename T>
const T &Pair1<T>::first() const
{
    return m_first;
}

template <typename T>
const T &Pair1<T>::second() const
{
    return m_second;
}

int main()
{
    Pair1<int> p1(6, 9);
    cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

    const Pair1<double> p2(3.4, 7.8);
    cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

    return 0;
}