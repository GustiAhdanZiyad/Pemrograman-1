#include <stdio.h>

long long hanoiSteps(int n) {
    if (n == 0) {
        return 0;
    }
    return 2 * hanoiSteps(n - 1) + 1;
}

int main(void) {
    int n;

    scanf("%d", &n);

    printf("Jumlah langkah minimum untuk %d cakram adalah %lld\n", n, hanoiSteps(n));

    return 0;
}

