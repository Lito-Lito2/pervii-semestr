
#include <stdio.h>
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
 * @brief меняет местами значения с использованием третьей переменной
 *
 * @param a - первая переменная
 * @param b - вторая переменная
 */
void SwapWithC(double a, double b);

/**
 * @brief меняет местами значения без использования третьей переменной
 *
 * @param a - первая переменная
 * @param b - вторая переменная
 */
void SwapWithoutC(double a, double b);

/**
 * @brief считывает число из консоли и проверяет совпадение типа
 *
 * @return считанное значение
 */
double ReadDouble();

/**
 * @brief выбирает способ обмена значений
 *
 * @param a - первая переменная
 * @param b - вторая переменная
 */
void Choise(double a, double b);

/**
 * @brief точка входа в программу
 *
 * @return возвращает 0, если программа выполнена корректно
 */
int main()
{
    printf("Введите значение a: ");
    double a = ReadDouble();

    printf("Введите значение b: ");
    double b = ReadDouble();

    printf("Выберите способ обмена значений:\n");
    printf("1 - с использованием третьей переменной\n");
    printf("2 - без использования третьей переменной\n");

    Choise(a, b);

    return 0;
}

double ReadDouble()
{
    double value = 0;

    if (scanf("%lf", &value) != 1) {
        printf("Error: incorrect type\n");
        exit(1);
    }

    return value;
}

void Choise(double a, double b)
{
    int method = 0;

    if (scanf("%d", &method) != 1) {
        printf("Error: incorrect type\n");
        exit(1);
    }

    if (method == WITH_C) {
        SwapWithC(a, b);
    }
    else if (method == WITHOUT_C) {
        SwapWithoutC(a, b);
    }
    else {
        printf("Error: incorrect method\n");
        exit(1);
    }
}

void SwapWithC(double a, double b)
{
    double c = a;
    a = b;
    b = c;

    printf("После обмена a = %.3f\n", a);
    printf("После обмена b = %.3f\n", b);
}

void SwapWithoutC(double a, double b)
{
    a = a + b;
    b = a - b;
    a = a - b;

    printf("После обмена a = %.3f\n", a);
    printf("После обмена b = %.3f\n", b);
}
