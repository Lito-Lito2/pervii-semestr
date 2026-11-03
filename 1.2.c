
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * @brief считает расстояние между двумя точками по заданным координатам
 *
 * @param x1 - координата x первой точки
 * @param y1 - координата y первой точки
 * @param x2 - координата x второй точки
 * @param y2 - координата y второй точки
 * @return расстояние между двумя точками
 */
double GetDistanceBetweenPoints(const double x1, const double y1, const double x2, const double y2);

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
    printf("Введите координату x первой точки: ");
    double x1 = GetValidValue();

    printf("Введите координату y первой точки: ");
    double y1 = GetValidValue();

    printf("Введите координату x второй точки: ");
    double x2 = GetValidValue();

    printf("Введите координату y второй точки: ");
    double y2 = GetValidValue();

    printf("Расстояние между двумя точками: %.3f\n",
           GetDistanceBetweenPoints(x1, y1, x2, y2));

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

double GetDistanceBetweenPoints(const double x1, const double y1, const double x2, const double y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
