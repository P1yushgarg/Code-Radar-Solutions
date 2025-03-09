#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num < 2) return 0; // 0 and 1 are not prime
    if (num == 2) return 1; // 2 is prime

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Found a divisor, not prime
        }
    }
    return 1; // Prime
}

int main() {
    int t;
    scanf("%d", &t); // Take number of test cases
    while (t--) {
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}
