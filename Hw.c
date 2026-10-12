#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int task();

int main()
{
    setlocale(LC_ALL, ".UTF8");
    task();
    return 0;
}

int task()
{
    int A, B;
    int vhunger, phunger;
    
    printf("Дз: Деление пиццы\n");
    printf("Насколько голоден Ваня (A): ");
    scanf("%d", &A);
    printf("Насколько голоден Петя (B): ");
    scanf("%d", &B);

    vhunger = (A % 2 == 0);
    phunger = (B % 2 == 0);

    if (vhunger != phunger)
    {
        printf("Резать пиццу на 4 части.\n");
    } else
    {
        printf("Резать пиццу на 6 частей.\n");
    }
    return 0; 
}
