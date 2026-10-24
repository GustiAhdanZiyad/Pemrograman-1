#include <stdio.h>

int main(void) {
    int multiple;
    char symbol;

    scanf("%d %c", &multiple, &symbol);

    for (int i = 1; i <= 50; i++) {
        if (i > 1) {
            printf(" ");
        }
        if (i % multiple == 0) {
            printf("%c", symbol);
        } else {
            printf("%d", i);
        }
    }
    printf("\n");

    return 0;
}