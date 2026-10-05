//Product of 2 computed prime numbers

#include <stdio.h>

//main function begins program execution
int main(){
    int p = 0, q = 0, n;
    int count = 0, num = 2;
    //Find the first two primes
    while(count < 2){
        int isPrime = 1;
        for(int i = 2; i < num; i ++){
            if(num % i == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
            if(count == 0) p = num;
            else q = num;
            count ++;
        }
        num ++;
    }
    n = p * q;
    printf("p: %d\n", p);
    printf("q: %d\n", q);
    printf("Product (n = p * q):"
           "%d\n", n);
    return 0;
}

