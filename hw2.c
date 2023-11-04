#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a negative number: ");
    scanf("%d", &num);

    for (int i = sizeof(num)*8-1; i >= 0; --i) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
    
    printf("\n");
    
    return 0;
}
