#include <stdio.h>

int main() {
    int num, bit_value;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    printf("Enter a value (0 or 1) to replace the third bit: ");
    scanf("%d", &bit_value);

    if (bit_value != 0 && bit_value != 1) {
        printf("The replacement value must be 0 or 1.\n");
        return 1;
    }

    // Маска для третьего бита
    int mask = 1 << 2; // Сдвигаем 1 на 2 позиции, чтобы установить третий бит в 1

    if (bit_value == 0) {
        // Если пользователь ввел 0, сбрасываем третий бит
        num = num & ~mask;
    } else {
        // Если пользователь ввел 1, устанавливаем третий бит
        num = num | mask;
    }

    printf("Changed value: %d\n", num);

    return 0;
}
