#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

void f1();
void f2();
void f3();

void main()
{
    setlocale(LC_CTYPE, "RUS.UTF-8");

    f1();
    puts("");
    f2();
    puts("");
    f3();
    system("pause");
}

void f1()
{
    char c;
    int i;
    float f;
    double d;

    puts("Введите символ:");
    scanf("%c", &c);
    printf("Введён символ %c\n", c);
    printf("Десятичный код: %d\n", c);
    printf("Шестнадцатеричный код: %X\n\n", c);
    puts("Введите целое число:");
    scanf("%d", &i);
    printf("Введено целое число %d\n", i);
    printf("1 / %d = %f\n\n", i, 1.f/i);
    puts("Введите вещественное число:");
    scanf("%f", &f);
    printf("Введено вещественное число %f\n", f);
    printf("Целая часть: %d\n", (int)f);
    printf("Дробная часть: %6.6g\n\n", f - (int)f);
    puts("Введите вещественное число двойной точности:");
    scanf("%le", &d);
    printf("Введено вещественное число двойной точности %le\n", d);
}

void f2()
{
    int a = 11;
    int b = 3;
    printf("a = %d, b = %d\n", a, b);
    printf("(float) a / b = %f\n", (float)a / b);
    printf("(double) a / b = %lf\n", (double)a / b);
}

void f3()
{
    int n;
    puts("Введите целое трёхзначное число:");
    scanf("%3d", &n);
    int first_digit = n / 100;
    int last_digit = n % 10;
    int sum = first_digit + last_digit;
    printf("Последняя цифра %d, первая - %d, сумма цифр - %d\n", last_digit, first_digit, sum);
}
