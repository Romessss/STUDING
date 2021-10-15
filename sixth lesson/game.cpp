#include <iostream>

int main()
{
    char dir = 'a';

    int x = 10;
    int y = 10;

    std::cout << "Press Enter for exit...\n";
    while ( dir != '\r' )
    {
        std::cout << "\n Your coordinates: " << x << ", " << y;
        std::cout << "\n choose a direction (n,s,e,w): ";
        dir = std::getchar();
        if ( dir == 'n' )
            y--;
        else
            if ( dir == 's')
            y++;
        else 
            if ( dir == 'e')
            x++;
        else
            if ( dir == 'w')
            x--;
    }
    return 0;        
}

