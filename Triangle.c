#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    char conf;

    do {
        char sym;
        int h;
        int c;

        printf("Введите символ для рисования: ");

        scanf(" %c", &sym);

        while ((c = getchar()) != '\n');

        printf("Введите высоту треугольника: ");

        scanf("%d", &h);

        while ((c = getchar()) != '\n');

        for (int i = 1; i <= h; i++)
        {
            for (int j = 0; j < h - i; j++)
            {
                putchar(' ');
            }

            for (int j = 0; j < 2 * i - 1; j++)
            {
                putchar(sym);
            }

            putchar('\n');
        }

        puts("Повторить? (y - да, n - нет):");

        scanf(" %c", &conf);

        while ((c = getchar()) != '\n');

    } while (conf == 'y');

    return 0;
}