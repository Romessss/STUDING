#include "BlackJack.hpp"
class House : public GenericPlayer
{
public:
    House(const string &name = "House") : GenericPlayer(name) {}

    virtual ~House() {}

    virtual bool IsHitting() const
    {
        return (GetTotal() <= 16);
    }

    void FlipFirstCard()
    {
        if (!(m_Cards.empty()))
            m_Cards[0]->Flip();
        else
            cout << "Нет карты для переворота!\n";
    }
};

int main()
{
    return 0;
}