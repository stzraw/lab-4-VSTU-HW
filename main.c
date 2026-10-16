#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int task1();
int task2();
int task3();

int main()
{
    setlocale(LC_CTYPE, "RUS");

    task1();
    task2();
    task3();
    return 0;
}

int task1()
{
    char c;
    int i;
    float f;
    double d;

    double num;
    int osn;
    double ost;
    char ch;
    double res;

    c = '!';
    i = 2;
    f = 3.14f;
    d = 5e-12;

    printf("Исходные значения:\n");
    printf("char c   = %c\n", c);
    printf("int i    = %d\n", i);
    printf("float f  = %f\n", f);
    printf("double d = %le\n", d);

    printf("\nВвод новых значений:\n");
    printf("Введите символ: ");
    scanf(" %c", &c);
    printf("Введите число типа int: ");
    scanf("%d", &i);
    printf("Введите число типа float: ");
    scanf("%f", &f);
    printf("Введите число типа double: ");
    scanf("%lf", &d);

    printf("\nИзмененные значения:\n");
    printf("Введено: c = %c, i = %d, f = %f, d = %g\n", c, i, f, d);

    printf("\nВведите вещественное число: ");
    scanf("%lf", &num);
    osn = (int)num;
    ost = num - osn;

    printf("Целая часть: %d\n", osn);
    printf("Дробная часть: %f\n", ost);

    printf("\nВведите символ для вывода кодов: ");
    scanf(" %c", &ch);
    printf("Символ: '%c'\n", ch);
    printf("10-ная СС: %d\n", ch);
    printf("16-ная СС: 0x%X\n", ch);

    printf("\nВведите целое число i: ");
    scanf("%d", &i);

    res = 1.0 / i;
    printf("Результат 1/%d равен: %f\n", i, res);
    return 0;
}

int task2()
{
    int a;
    int b;
    int x;
    float y;
    double z;

    float res_float_cast;
    double res_double_cast;
    float res_bracket_cast;

    a = 11;
    b = 3;

    x = a / b;
    y = a / b;
    z = a / b;

    printf("Неявное преобразование типов:\n");
    printf("x (int) = %d\n", x);
    printf("y (float) = %f\n", y);
    printf("z (double) = %lf\n", z);

    res_float_cast = (float)a / b;
    res_double_cast = (double)a / b;
    res_bracket_cast = (float)(a / b);

    printf("\nЯвное преобразование типов:\n");
    printf("(float)a / b   = %f\n", res_float_cast);
    printf("(double)a / b  = %lf\n", res_double_cast);
    printf("(float)(a / b) = %f\n", res_bracket_cast);

    return 0;
}

int task3()
{
    int n;
    int last, middle, first;
    int sum, revers;

    printf("Введите трехзначное число: ");
    scanf("%d", &n);

    last = n % 10;
    middle = (n / 10) % 10;
    first = n / 100;

    sum = first + middle + last;
    revers = last * 100 + middle * 10 + first;

    printf("Последняя цифра: %d, первая: %d, сумма цифр: %d, наоборот: %d\n", last, first, sum, revers);
    return 0;
}
