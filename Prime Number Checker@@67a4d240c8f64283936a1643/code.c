#include <stdio.h>

int isPrime(int num) {
    int c = 0, i;
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            c++;
        }
    }
    return (c == 1) ? 1 : 0;  // Simplified return statement
}

int main() {  // Ensure only one main function exists
    int t;
    scanf("%d", &t);
    while (t--) {
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}
