#include <stdio.h>

int main() {
    int rows = 5;
    int num = 10;
int i;
int j;
    for (i = 0; i < rows; i++) {
        for ( j = 0; j <= i; j++) {
            printf("%d ", num * num);
        }
        printf("\n");
        num -= 2;
    }

    return 0;
}

