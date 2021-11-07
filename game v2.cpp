#include <stdio.h>
#include <stdlib.h>

#define SPACE ' '
char matrix[3][3] = {
    {SPACE, SPACE, SPACE},
    {SPACE, SPACE, SPACE},
    {SPACE, SPACE, SPACE}};
void get_computer_move(void), get_player_move(void);
void disp_matrix(void);
char check(void);
int main()
{
    char done;
    printf("это игра в крустики-нолики.\n");
    printf("Вы будете играть против компьютера.\n");
    done = SPACE;
    do
    {
        disp_matrix();
        get_player_move();
        done = check();
        if (done != SPACE)
            break;
        get_computer_move();
        done = check();
    } while (done == SPACE);
    if (done == 'X')
        printf("Вы победили!\n");
    else
        printf("Я победил!!!!\n");
    disp_matrix();
    return 0;
}

// ход игрока
void get_player_move(void)
{
    int x;
    int y;
    printf("введите координаты X.\n");
    printf("сторока? ");
    scanf("%d", &x);
    x--;
    printf("столбик? ");
    scanf("%d", &y);
    y--;
    if (x < 0 || y < 0 || x > 2 || y > 2 || matrix[x][y] != SPACE)
    {
        printf("Неправильный ход.\n");
        get_player_move();
    }
    else
        matrix[x][y] = 'X';
}

//ход компьютера
void get_computer_move(void)
{
    register int t;
    char *p;
    p = (char *)matrix;
    for (t = 0; *p != SPACE && t < 9; ++t)
        p++;
    if (t == 9)
    {
        printf("ничья\n");
        exit(0);
    }
    else
        *p = 'O';
}

// отображение игровой доски
void disp_matrix(void)
{
    int t;
    for (t = 0; t < 3; t++)
    {
        printf(" %c | %c | %c", matrix[t][0], matrix[t][1], matrix[t][2]);
        if (t != 2)
            printf("\n --------- \n");
    }
    printf("\n");
}

// проверка на победу
char check(void)
{
    int t;
    char *p;
    for (t = 0; t < 3; t++)
    { /* проверка строк */
        p = &matrix[t][0];
        if (*p == *(p + 1) && *(p + 1) == *(p + 2))
            return *p;
    }
    for (t = 0; t < 3; t++)
    { /* проверка столбцов */
        p = &matrix[0][t];
        if (*p == *(p + 3) && *(p + 3) == *(p + 6))
            return *p;
    }

    /* проверка диагоналей */
    if (matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2])
        return matrix[0][0];
    if (matrix[0][2] == matrix[1][1] && matrix[1][1] == matrix[2][0])
        return matrix[0][2];
    return SPACE;
}