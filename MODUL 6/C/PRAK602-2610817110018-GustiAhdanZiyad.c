#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 1;
    int zetsu[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &zetsu[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d%s", zetsu[i] * (i + 1), (i == n - 1) ? "" : " ");
    }
    printf("\n");
    return 0;
}