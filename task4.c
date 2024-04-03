#include <stdio.h>

int squareElements(int *arr, int size) {
    int *ptr = arr; 
    
int i;
    for ( i = 0; i < size; i++) {
        *ptr = (*ptr) * (*ptr); 
        ptr++;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
   
    squareElements(arr, size);
    
  
    printf("Squared elements:\n");
    int j;
    for ( j = 0; j < size; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");
    
    return 0;
}

