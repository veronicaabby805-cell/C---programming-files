//Prime numbers 1-1000

#include <stdio.h>

//main function begins program execution

int main(){
    int num, i, isPrime;
    printf("Enter a number between 1 and 1000 to check if"
           "it is a prime number. Enter 0 to exit.\n");
    while(1){
        printf("\nEnter number: ");
        scanf("%d", &num);

        if(num == 0) break;
        if (num < 2 || num > 1000) {
        printf("Out of range! Please enter 2 - 1000.");
        continue;
        }
        isPrime = 1;
        for(i = 2; i < num; i ++){
            if (num % i == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime) printf("%d is PRIME", num);
        else printf("%d is NOT prime", num);
    }
    return 0;
}
