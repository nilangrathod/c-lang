#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    switch (num > 0) {
        case 1:
            printf("%d is positive.\n", num);
            break;
        case 0:
            printf("%d is not positive.\n", num);
            break;
    }
    
    return 0;
}

