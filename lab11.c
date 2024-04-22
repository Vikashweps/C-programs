#include <stdio.h>
#include <math.h>

// Функция для вычисления факториала
int factorial(int n) {
    if (n == 0) { // 0! = 1
        return 1;
    } else { // n! = n * (n-1)! Функция будет вызывать саму себя
        return n * factorial(n - 1);
    }
}

double summa(double x, int n, int *k) {

    double f = (pow(x, 2*n + 1) / factorial(2*n + 1)); // Значение текущего члена ряда
        if (f < 0.001) { // если текущий член ряда меньше указанной точности
        return f; // то возвращаем текущее значение
        }
        else {
            (*k) += 1;
        return summa(x,n+1,k)+f; // Рекурсивно вызываем функцию для след члена 
    }
}

int main() {
    double x = 1.7; 
    int k = 0; //переменная числа членов ряда
    double r = summa(x, 0, &k); // Вычисляем сумму ряда = количество членов
    printf("Значение суммы ряда: %6f\n", r);
    printf("Число членов ряда, вошедших в сумму: %6d\n", k);
    return 0;
}
