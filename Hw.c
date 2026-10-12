#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int task( int A, int B);

int main()
{
    int A,B,pieces;

    setlocale(LC_ALL, "RUS");

    printf("Дз: Деление пиццы\n");
    printf("Насколько голоден Ваня (A): ");
    scanf("%d", &A);
    printf("Насколько голоден Петя (B): ");
    scanf("%d", &B);

    pieces = task(A, B);
    printf("Резать пиццу на %d\n", pieces);

    return 0;
}

int task(int A, int B)
{
    return ((A % 2) != (B % 2) ? 4:6);
}
