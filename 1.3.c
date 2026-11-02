#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define G 9.81

/**
 * @brief считает давление бетонной плиты на основе полученных данных
 *
 * @param m - масса бетонной плиты в кг
 * @param s - площадь опоры в м^2
 * @return значение давления
 */
double GetPressure(const double m, const double s);

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
    printf("Введите массу бетонной плиты в кг: ");
    double m = GetValidValue();

    printf("Введите площадь опоры в м^2: ");
    double s = GetValidValue();

    printf("Давление равно: %.3f Па ", GetPressure(m, s));

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
    if(value <= 0){
        printf("Error: incorrect type (must be positive number)\n");
        exit(1);
    }
    return value;
}

double GetPressure(const double m, const double s)
{
    return (m * G) / s;
}
