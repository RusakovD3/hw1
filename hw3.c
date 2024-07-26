#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned int num;

    printf("Enter a positive number: ");
    if (scanf("%u", &num) != 1) {
        perror("Error input");
        exit(EXIT_FAILURE);
    }
    if (num < 0) {
        printf("%d is not positive number!\n", num);
        exit(EXIT_FAILURE);
    }

    int count = 0;
    while (num > 0) {
        if (num & 1) count++;
        num >>= 1;
    }
    printf("The number of 1 in binary form: %d\n", count);

    exit(EXIT_SUCCESS);
}
