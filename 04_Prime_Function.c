#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);

    if (isPrime(n)) {
        printf("The number %d is a prime number.\n\n", n);
    } else {
        printf("The number %d is not a prime number.\n\n", n);
    }
    printf("Prime numbers less than 100:\n");
    for (int i = 2; i < 100; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}