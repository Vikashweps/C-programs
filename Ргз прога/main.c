#include "func.h"

int main() {
    int capacity;
    printf("вместимость рюкзака:");
    scanf("%d", &capacity);
    
    int a;
    printf("количество помещаемых элементов: ");
    scanf("%d", &a);
    
    int *values = (int*)malloc(a * sizeof(int));

    if (values == NULL) {
        printf("Ошибка выделения памяти\n");
        return 1;
    }
    
    printf("Введите %d элементы:\n", a);
    for (int i = 0; i < a; i++) {
        scanf("%d", &values[i]);
    }  

    
    int weights[] = {10, 20, 30};
    int n = sizeof(values) / sizeof(values[0]);

    int max_value = knapsack(capacity, values, weights, n);
    printf("Максимальная стоимость, которую можно унести в рюкзаке вместимостью %d: %d\n", capacity, max_value);

    return 0;
}
