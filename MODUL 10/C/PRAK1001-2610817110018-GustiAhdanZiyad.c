#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0) {
        return 1; // Base case
    }
    return (unsigned long long)n * factorial(n - 1);
}

int main(void) {
    int n;

    scanf("%d", &n);

    printf("%d! = %llu\n", n, factorial(n));

    return 0;
}
