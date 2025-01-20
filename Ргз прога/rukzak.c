#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int knapsack(int capacity, int values[], int weights[], int n) {
    int dp[n + 1][capacity + 1];

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= capacity; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (weights[i - 1] <= w)
                dp[i][w] = max(values[i - 1] + dp[i - 1][w - weights[i - 1]], dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }

    return dp[n][capacity];
}

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
