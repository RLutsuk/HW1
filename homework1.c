#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 

double revers_power(double x, int osnov, int step) { // Функция умножение числа x на (osnov ^ -step)
    int i;
    for (i = 0; i < step; i++)
        x /= osnov;
    return(x);
}

int main()
{
    int i1, i = 1; // i1 -целая часть, i - степень 
    double i2 = 0; // i2 - дробная часть
    double answer; // Переменная итогового ответа
    int x;
    printf("Введите целую и дробную части числа\n");
    scanf("%d", &i1);

    getchar(); // Считывание пробела

    while ((x = getchar()) != '\n') {
        x = ((int)x - ((int)('0'))); // Перевод из номера символа в цифру
        if ((x < 0) || (x > 9)) { // Проверка на введение символа
            printf("ОШИБКА: некорректные данные!!!");
            return(-1);
        }
        i2 += revers_power(x, 10, i++); // Аргументы функции revers_power
    }
    answer = i1 + i2;
    printf("%lf", answer);
    return 0;
}
