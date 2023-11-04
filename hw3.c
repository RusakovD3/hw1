#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a positive number: ");
    scanf("%d", &num);
    
    int count = 0;
    while (num > 0) {
        if (num & 1)
            count++;
        num >>= 1;
    }
    printf("The number of 1 in binary form: %d\n", count);
    
    return 0;
}
