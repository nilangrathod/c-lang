#include <stdio.h>


struct House {
    int room_quantity;
    int established_year;
    char city[50];
};

int main() {
    int n;
    
    printf("Enter the number of houses: ");
    scanf("%d", &n);


    struct House houses[n];
int i;
    for ( i = 0; i < n; ++i) {
        printf("\nDetails for House %d:\n", i + 1);
        printf("Room quantity: ");
        scanf("%d", &houses[i].room_quantity);
        printf("Established year: ");
        scanf("%d", &houses[i].established_year);
        printf("City: ");
        scanf("%s", houses[i].city);
    }

  
    printf("\nDetails of %d houses:\n", n);
    
    int j;
    for (j = 0; j < n; ++j) {
        printf("\nHouse %d:\n", j + 1);
        printf("Room quantity: %d\n", houses[j].room_quantity);
        printf("Established year: %d\n", houses[j].established_year);
        printf("City: %s\n", houses[j].city);
    }

    return 0;
}

