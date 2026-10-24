#include <stdio.h>

int sumDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return n % 10 + sumDigits(n / 10);
}

int main(void) {
    int n;

    scanf("%d", &n);

    printf("Jumlah digit dari %d adalah %d\n", n, sumDigits(n));

    return 0;
}