#include <stdio.h>

int main() {
    int A[] = {3, -2, 5, 0, -1, 4, -3, 2, 1, -4}; // Пример массива

    int k = -1;
    for (int i = 0; i < 10; i++) {
        if (A[i] < 0) {
            continue;
        }
        if (k == -1) {
            k = i;
        } else {
            if (A[i] < A[k]) {
                k = i;
            }
        }
    }

    if (k != -1) {
        printf("Индекс минимального положительного элемента: %d\n", k);
    } else {
        printf("В массиве нет положительных элементов.\n");
    }

    return 0;
}
