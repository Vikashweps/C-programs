#include <stdio.h>
#include <stdlib.h>

float calculateAverage(int arr[], int size, int index, float sum) {
    if (index == size  ) {
        return sum / size;
    }
    
    sum += arr[index];
    
    return calculateAverage(arr, size, index + 1, sum);
}

int main() {
    int size;
    printf("Введите размер массива: ");
    scanf("%d", &size);
    
    int *arr = (int *)malloc(size * sizeof(int));
    
   
    
    printf("Введите элементы массива:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    float average = calculateAverage(arr, size, 0, 0.0);
    
    printf("Среднее арифметическое: %.2f\n", average);
    
    free(arr);
    
    return 0;
}
