#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char kalimat[200];
    printf("Kalimat: ");
    fgets(kalimat, sizeof(kalimat), stdin);
    kalimat[strcspn(kalimat, "\r\n")] = '\0';

    int vokal = 0, konsonan = 0;
    for (int i = 0; kalimat[i] != '\0'; i++) {
        char c = tolower(kalimat[i]);
        if (c >= 'a' && c <= 'z') {
            if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
                vokal++;
            } else {
                konsonan++;
            }
        }
    }

    printf("Jumlah Vokal: %d\n", vokal);
    printf("Jumlah Konsonan: %d\n", konsonan);
    return 0;
}