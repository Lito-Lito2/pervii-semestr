

#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

/*
@brief рассчитывает расстояние между двумя точками по заданным координатам
@param x1 - координата x первой точки
@param y1 - координата y первой точки
@param x2 - координата x второй точки
@param y2 - координата y второй точки
@return расстояние между двумя точками
*/
double GetDistanceBetweenPoints(const double x1, const double y1, const double x2, const double y2);

/*
@brief точка входа в программу
@return возвращает 0, если программа выполнена корректно
*/
int main()
{
    double x1 = 1;
    double y1 = 2;
    double x2 = 4;
    double y2 = 6;

    printf("Расстояние между двумя точками: %.2lf\n",
           GetDistanceBetweenPoints(x1, y1, x2, y2));

    return 0;
}

double GetDistanceBetweenPoints(const double x1, const double y1, const double x2, const double y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
