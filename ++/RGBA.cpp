#include <iostream>
#include <cstdint>
using namespace std;

class RGBA
{
private:
    int m_red;
    int m_green;
    int m_blue;
    int m_alpha;
    int colors;
public:
    RGBA()
    {
        m_red = 0;
        m_green = 0;
        m_blue = 0;
        m_alpha = 255;
        colors = (m_red, m_green, m_blue, m_alpha);
    }
    void print()
    {
        cout << "RGBA(" << m_red << "," << m_green << "," << m_blue << "," << m_alpha << ")\n";
    }
};
int main()
{
    RGBA colors;
    colors.print();
    return 0;
}