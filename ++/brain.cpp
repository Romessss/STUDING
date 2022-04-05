#include <iostream>
#include <string>
using namespace std;
#include <cassert>

class ArrayInt
{
private:
    int m_length;
    int *m_data;

public:
    ArrayInt() : m_length(0), m_data(nullptr) {}

    ArrayInt(int length) : m_length(length)
    {
        assert(length >= 0);
        if (length > 0)
            m_data = new int[length];
        else
            m_data = nullptr;
    }
    ~ArrayInt()
    {
        delete[] m_data;
    }
    void erase()
    {
        delete[] m_data;
        m_length = 0;
        m_data = nullptr;
    }
    int &operator[](int index)
    {
        return m_data[index];
    }

    void resize(int newLegth)
    {
        if (newLegth <= 0)
        {
            erase();
            return;
        }
        int *newData = new int[newLegth]{0};
        int CopyElements = 0;
        if (newLegth > m_length)
            CopyElements = m_length;
        else
            CopyElements = newLegth;
        for (size_t i = 0; i < CopyElements; i++)
        {
            newData[i] = m_data[i];
        }
        delete[]m_data;
        m_data = newData;
        m_length = newLegth;
    }
};

int main_con()
{
    ArrayInt AI(10);
    int k = AI[5];

    return 0;
}