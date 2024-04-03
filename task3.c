#include <stdio.h>


int reverseNumber(int num) {
    int reversedNum = 0;
    

    while(num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    
    return reversedNum;
}

int main() {
    int number;


    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

  
    if (number < 100 || number > 999) {
        printf("Please enter a valid 3-digit number.\n");
        return 1;
    }

 
    int reversed = reverseNumber(number);


    printf("The reversed number is: %d\n", reversed);

    return 0;
}

