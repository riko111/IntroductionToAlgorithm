#include <stdio.h>
#define TRUE 1
#define FALSE 0

int is_prime(int);

int main(void){
    int n, prime;
    printf("input number==>");
    scanf("%d",&n);
    prime = is_prime(n);
    if(prime == TRUE){
        printf("%d is prime",n);
    } else {
        printf("%d is not prime",n);
    }
    return 0;
}

int is_prime(int n){
    int i;
    for(i=2; i<n; i++) {
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}