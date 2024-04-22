#include <stdio.h>

int findDuplicate(int c[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (c[i] == c[j]) {
                return i;
            }
        }
    }
    return -1;
}

int main() {
    int c[] = {0, 9, 5, 3, 0, 10, 11}; // Пример массива с возможным повторяющимся элементом
    int n = sizeof(c) / sizeof(c[0]); // Размер массива c

    int duplicateIndex = findDuplicate(c, n);

    if (duplicateIndex != -1) {
        printf("Первый повторяющийся элемент %d найден на позиции %d\n", c[duplicateIndex], duplicateIndex);
    } else {
        printf("Повторяющиеся элементы не найдены\n");
    }

    return -1;
}
