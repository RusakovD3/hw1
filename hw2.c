#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;

    printf("Enter a negative number: ");
    if (scanf("%u", &num) != 1) {
        perror("Error input");
        exit(EXIT_FAILURE);
    }
    if (num >= 0) {
        printf("%d is not negative number!\n", num);
        exit(EXIT_FAILURE);
    }

    for (int i = sizeof(num) * 8 - 1; i >= 0; --i) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }

    printf("\n");
    exit(EXIT_SUCCESS);
}
