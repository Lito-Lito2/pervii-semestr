
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * @brief перечисляемый тип для выбора способа обмена значений
 */
enum Method
{
    WITH_C = 1,
    WITHOUT_C = 2
};

/**
 * @brief меняет местами значения переменных с использованием третьей переменной
 *
 * @param a - указатель на первую переменную
 * @param b - указатель на вторую переменную
 */
void SwapWithC(double *a, double *b);

/**
 * @brief меняет местами значения переменных без использования третьей переменной
 *
 * @param a - указатель на первую переменную
 * @param b - указатель на вторую переменную
 */
void SwapWithoutC(double *a, double *b);

/**
 * @brief Считывает число из консоли и проверяет совпадение типа
 *
 * @return считанное значение
 */
double ReadDouble();

/**
 * @brief проверяет корректность ввода
 *
 * @return корректное полученное значение
 */
double GetValidValue();

/**
 * @brief точка входа в программу
 *
 * @return возвращает 0, если программа выполнена корректно
 */
int main()
{
    printf("Введите значение a: ");
    double a = GetValidValue();

    printf("Введите значение b: ");
    double b = GetValidValue();

    printf("Выберите способ обмена значений:\n");
    printf("1 - с использованием третьей переменной\n");
    printf("2 - без использования третьей переменной\n");

    int method = 0;
    if(scanf("%d", &method) != 1){
        printf("Error: incorrect type\n");
        exit(1);
    }

    if(method == WITH_C){
        SwapWithC(&a, &b);
    }
    else if(method == WITHOUT_C){
        SwapWithoutC(&a, &b);
    }
    else{
        printf("Error: incorrect method\n");
        exit(1);
    }

    printf("После обмена a = %.3f\n", a);
    printf("После обмена b = %.3f\n", b);

    return 0;
}

double ReadDouble()
{
    double value = 0;
    if(scanf("%lf", &value) != 1){
        printf("Error: incorrect type\n");
        exit(1);
    }
    return value;
}

double GetValidValue()
{
    double value = ReadDouble();
    return value;
}

void SwapWithC(double *a, double *b)
{
    double c = *a;
    *a = *b;
    *b = c;
}

void SwapWithoutC(double *a, double *b)
{
    if(a != b){
        *a = *a + *b;
        *b = *a - *b;
        *a = *a - *b;
    }
}
