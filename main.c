#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int task1(void);
int task2(void);
int task3(void);

int main(void) 
{
    setlocale(LC_ALL, ".UTF8");
    task1();
    task2();
    task3();
    return 0;
}

int task1(void)
{
    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;

    printf("Исходные значения\n");
    printf("char c   = %c\n", c);
    printf("int i    = %d\n", i);
    printf("float f  = %f\n", f);
    printf("double d = %le\n\n", d);

    printf("Ввод новых значений\n");
    printf("Введите символ: ");
    scanf(" %c", &c); 
    printf("Введите число типа int: ");
    scanf("%d", &i);
    printf("Введите число типа float: ");
    scanf("%f", &f);
    printf("Введите число типа double: ");
    scanf("%lf", &d);

    printf("Измененные значения\n");
    printf("Введено: c = %c, i = %d, f = %f, d = %g\n", c, i, f, d);

    double num;
    printf("Введите вещественное число: ");
    scanf("%lf", &num);
    int osn = (int)num; 
    double ost = num - osn; 

    printf("Целая часть: %d\n", osn);
    printf("Дробная часть: %f\n", ost);

    char ch;
    printf("Введите символ: ");
    
    scanf("%c", &ch);
    
    printf("Символ: '%c'\n", ch);
    printf("10-ная СС: %d\n", ch);
    printf("16-ная СС: 0x%X\n", ch);

    printf("Введите целое число i: ");
    scanf("%d", &i);

    if (i == 0) {
        printf("Ошибка: невозможно делить на 0\n");
    }
    else {
        double res = 1.0 / i; 
        printf("Результат 1/%d равен: %f\n", i, res);
    }
    return 0;
}

int task2(void)
{
    int a = 11;
    int b = 3;

    int x;
    float y;
    double z;

    x = a / b;
    y = a / b;
    z = a / b;

    printf("Неявное преобразование типов\n");
    printf("x (int) = %d\n", x);
    printf("y (float) = %f\n", y);
    printf("z (double) = %lf\n", z);

    printf("Явное преобразование типов\n");
    printf("(float)a / b   = %f\n", (float)a / b);
    printf("(double)a / b  = %lf\n", (double)a / b);
    printf("(float)(a / b) = %f\n", (float)(a / b));

    return 0;
}

int task3(void)
{
    int n;
    printf("Введите трехзначное число: ");
    scanf("%d", &n);

    int last = n % 10;          
    int middle = (n / 10) % 10; 
    int first = n / 100;       

    int sum = first + middle + last;
    int revers = last * 100 + middle * 10 + first;
    printf("Последняя цифра: %d, первая: %d, сумма цифр: %d, наоборот: %d\n", last, first, sum, revers);
    return 0;
}
