
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Считывает число из консоли и проверяет совпадение типа
 *
 * @return считанное значение
 */
double ReadValue();

/**
 * @brief проверяет корректность ввода
 *
 * @return корректное полученное значение
 */
double GetPositiveValue();

/**
 * @brief считает функцию
 *
 * @param a - константа
 * @param x - вводимое пользователем число
 * @return результат вычислений функции
 */
double CountingFunction(const double a, const double x);

/**
 * @brief точка входа в программу
 *
 * @return возвращает 0 при успешном выполнении программы
 */
int main()
{
    const double a = 2.5;

    printf("введите x: ");
    double x = GetPositiveValue();

    printf("y = %.3f", CountingFunction(a, x));

    return 0;
}

double ReadValue(){
    double x = 0;
    if(scanf("%lf", &x) != 1){
        printf("Ошибка: неверный ввод");
        exit(1);
    }

    return x;
}

double GetPositiveValue(){
    double value = ReadValue();
    if(value < 0){
      printf("Неверный ввод");
      exit(1);
      }
    return value;
}

double CountingFunction(const double a, const double x){

    if(x > a){
        return x * sin(x) * sin(x);
    }else return x * cos(x) * cos(x);
}
