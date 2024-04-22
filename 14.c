#include <stdio.h>
#include <string.h>

void reverseWord(char *word) {
    int length = strlen(word);
    for (int i = 0; i < length / 2; i++) {
        char temp = word[i];
        word[i] = word[length - i - 1];
        word[length - i - 1] = temp;
    }
}

int main() {
    FILE *file;
    file = fopen("text.txt", "w");

    if (file == NULL) {
        printf("Ошибка при создании файла.");
        return 1;
    }

    char str[100];

    printf("Введите текст для записи в файл (для завершения введите пустую строку):\n");

    do {
        fgets(str, 100, stdin);

        char *word = strtok(str, " \n"); // разделение строки на слова

        while (word != NULL) {
            reverseWord(word);
            fprintf(file, "%s ", word);
            word = strtok(NULL, " \n");
        }

    } while (str[0] != '\n');

    fclose(file);

    printf("Текст успешно записан в файл с обратными словами.\n");

    return 0;
}
