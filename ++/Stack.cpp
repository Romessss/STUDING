#include <iostream>
#include <cassert>
using namespace std;

class Stack
{ 
    private:
        int m_array[10];
        int m_freeelement;

        void reset()
        {
            m_freeelement = 0;
            for (int i = 0; i < 10; ++i)
                m_array[i] = 0;
        }

        bool push(int value)
        {

            if (m_freeelement == 10)
                return false;

            m_array[m_freeelement++] = value;
            return true;
        }

        int pop()
        {
            assert(m_freeelement > 0);
            return m_array[--m_freeelement];
        }

        void print()
        {
            cout << "( ";
            for (int i = 0; i < m_freeelement; ++i)
                cout << m_array[i] << ' ';
            cout << ")\n";
        };
};
    
    int main()
    {
        Stack stack;
        stack.reset();
        stack.print();

        stack.push(3);
        stack.push(7);
        stack.push(5);
        stack.print();

        stack.pop();
        stack.print();

        stack.pop();
        stack.pop();
        stack.print();

        return 0;
    };
