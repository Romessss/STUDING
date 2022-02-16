#include <iostream>

using namespace std;

class Fraction
{
    int chis;
    int znam;

public:
    Fraction(int chis, int znam)
    {
        if (znam == 0)
            throw runtime_error("zero division error");
        this->chis = chis;
        this->znam = znam;
    }
    int get_chis() const
    {
        return chis;
    }

    int get_znam() const
    {
        return znam;
    }
    friend Fraction operator+(const Fraction &f1, const Fraction &f2);
    
    friend Fraction operator-(const Fraction &i);

    friend Fraction operator+(const Fraction &f1, const Fraction &f2)
    {
        return Fraction(f1.chis * f2.znam + f2.chis * f1.znam, f1.znam * f2.znam);
    }
};

//

int main()
{
    Fraction f1(2, 3);
    Fraction f2(1, 3);
    //    Fraction f_result = f1 + f2;

    system("pause");
    return 0;
}