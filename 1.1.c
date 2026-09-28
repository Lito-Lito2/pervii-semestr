#include <stdio.h>
#include <math.h>

/**
 * @brief рассчет функции A
 * 
 * @param x - параметр
 * @param y - параметр
 * @param z - параметр
 * @return значение функции A 
 */
double GetA(const double x, const double y, const double z);

/**
 * @brief рассчет функции B
 * 
 * @param x - параметр
 * @param y - параметр
 * @param z - параметр
 * @return значение функции B 
 */
double GetB(const double x, const double y, const double z);

/**
 * @brief точка входа в программу
 * 
 * @return возвращает 0 в случае успешного завершения программы
 */
int main()
{
    double x = -2.9;
    double y = 15.5;
    double z = 0.44;

    printf("A = %lf\n", GetA(x, y, z));
    printf("B = %lf\n", GetB(x, y, z));

    return 0;
}

double GetA(const double x, const double y, const double z){
    return sqrt(pow(x, 2) + y) - pow(y, 2) * pow(sin((x + z) / x), 3);
}

double GetB(const double x, const double y, const double z){
    return pow(cos(pow(x, 3)), 2) - (x / (sqrt(pow(z, 2) + pow(y, 2))));
}
