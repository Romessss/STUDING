#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    int k = 1;  //начальный ключ
    int n = 64; //мощность алфавита, оно же количество символов (в данном варианте без буквы Ё) 64 - 32 от "а" до "я" и 32 от "А" до "Я"

    FILE *input = fopen("cryptography1.txt", "rt");           //открываем файл для чтения
    FILE *encode = fopen("encoded_ceaser.txt", "w+t"); //создаём файл для записи и чтения
    FILE *decode = fopen("decoded_ceaser.txt", "wt");  //создаём файл для записи

    //Проверяем удалось ли нам открыть файл
    if (!input)
    {
        perror("ceaser.txt"); //выводим сообщение об ошибке
        system("pause");
        exit(1); //выходим из программы
    }

    printf("Coding text!\n");

    //Шифрование
    while ((x = fgetc(input)) != EOF) //считываем из файла по символу сдвигая его согласно ключу
    {
        if (x >= 192 && x <= 255)
        {
            y = (x - 192 + k) % n + 192;
            k++;
            if (k > 3)
                k = 1;
        }
        else
        {
            y = x;
        }
        fputc(y, encode); //вывод зашифрованного символа в файл
    }

    printf("Coding complete!\n");

    //Расшифровка

    fseek(encode, 0, SEEK_SET); //откатываем указатель на начало файла, чтобы чтение шло с начала файла

    printf("Decoding encoded text!\n");

    k = 1;                             //снова устанавливаем начальное значение ключа
    while ((x = fgetc(encode)) != EOF) //считываем из файла по символу сдвигая его в противоположенную сторону согласно ключу
    {
        if (x >= 192 && x <= 255)
        {
            y = (x - 192 - k + n) % n + 192;
            k++;
            if (k > 3)
                k = 1;
        }
        else
        {
            y = x;
        }
        fputc(y, decode); //выводим расшифрованный символ в файл
    }
    printf("Decoding complete!\n");
    //закрываем файлы
    fclose(input);
    fclose(encode);
    fclose(decode);

    //ждём подтверждение пользователя любой клавишей для выхода
    system("pause");
}