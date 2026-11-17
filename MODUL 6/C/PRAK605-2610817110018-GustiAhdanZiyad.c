#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 1;
    
    int A[n][n], B[n][n], C[n][n];
    int total_elemen = n * n;
    int count = 0;
    char buffer[256];
    
    fgets(buffer, sizeof(buffer), stdin);
    
    while (count < total_elemen) {
        if (fgets(buffer, sizeof(buffer), stdin) == NULL) break;
        char *p = buffer;
        int val;
        while (sscanf(p, "%d", &val) == 1) {
            A[count / n][count % n] = val;
            count++;
            while (*p == ' ' || *p == '\t') p++;
            while ((*p >= '0' && *p <= '9') || *p == '-') p++;
        }
    }
    
    count = 0;
    while (count < total_elemen) {
        if (fgets(buffer, sizeof(buffer), stdin) == NULL) break;
        char *p = buffer;
        int val;
        while (sscanf(p, "%d", &val) == 1) {
            B[count / n][count % n] = val;
            count++;
            while (*p == ' ' || *p == '\t') p++;
            while ((*p >= '0' && *p <= '9') || *p == '-') p++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Matriks AXB\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d%s", C[i][j], (j == n - 1) ? "" : " ");
        }
        printf("\n");
    }
    return 0;
}