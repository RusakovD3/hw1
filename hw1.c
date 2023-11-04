#include <stdio.h>

int main() {
    unsigned int num;
    
    printf("Enter a positive number: ");
    scanf("%u", &num);
    
    int bit;
    for (int i = sizeof(num)*8-1; i >= 0; --i) {
        bit = (num >> i) & 1;
        printf("%d", bit);
    }
    
    printf("\n");
    return 0;
}
