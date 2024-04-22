#include <stdio.h>

int main() {
    int A[1000]; // Массив для хранения чисел, удовлетворяющих условию
    int j = 0; // Индекс для массива A

    for (int a = 10; a < 30000; a++) {
        int n = a, s = 0;
        while (n != 0) {
            int k = n % 10;
            s += k;
            n = n / 10;
        }

        if (a == s * s * s) {
            A[j++] = a;
        }
    }

    // Вывод чисел, удовлетворяющих условию
    for (int i = 0; i < j; i++) {
        printf("%d ", A[i]);
    }
 printf("\n");
    return 0;
}
