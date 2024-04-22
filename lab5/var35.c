#include <stdio.h>
 //находит минимальный элемент в массиве A и помещает его в конец массива
int main() {
    int n = 5; // Размер массива
    int A[] = {3, 1, 5, 2, 4}; // Пример массива

    while (n != 0) {
        int k = 0;
        for (int i = 1; i < n; i++) {
            if (A[i] < A[k]) {
                k = i;
            }
        }

        int c = A[k];
        A[k] = A[n - 1];
        A[n - 1] = c;

        n--;
    }

    printf("Отсортированный массив по возрастанию: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
