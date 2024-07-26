#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    unsigned char byte_value;

    printf("Enter a positive number: ");
    if (scanf("%d", &num) != 1) {
        perror("Error input");
        exit(EXIT_FAILURE);
    }
    if (num < 0) {
        printf("%d is not positive number!\n", num);
        exit(EXIT_FAILURE);
    }

    printf("Enter a new value for the third byte (0-255): ");
    if (scanf("%hhu", &byte_value) != 1) {
        perror("Error input");
        exit(EXIT_FAILURE);
    }

    if (byte_value != 0 && byte_value != 1) {
        printf("The replacement value must be 0 or 1.\n");
        exit(EXIT_FAILURE);
    }

    // Очистка третьего байта (с индексом 2)
    num &= ~(0xFF << 16);

    // Установка нового значения в третий байт
    num |= (byte_value << 16);

    // // Маска для третьего бита. Сдвигаем 1 на 2 позиции, чтобы установить
    // третий бит в 1
    // // int bit_value is equal 0 or 1 its input too
    // int mask = 1 << 2;
    // if (bit_value == 0) {
    //     // Если пользователь ввел 0, сбрасываем третий бит
    //     num = num & ~mask;
    // } else {
    //     // Если пользователь ввел 1, устанавливаем третий бит
    //     num = num | mask;
    // }

    printf("Changed value: %d\n", num);

    return 0;
}
