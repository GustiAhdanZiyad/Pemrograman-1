#include <stdio.h>
#include <string.h>

int main(void) {
    char depan[50], belakang[50];
    printf("Nama Depan: ");
    fgets(depan, sizeof(depan), stdin);
    depan[strcspn(depan, "\r\n")] = '\0';

    printf("Nama Belakang: ");
    fgets(belakang, sizeof(belakang), stdin);
    belakang[strcspn(belakang, "\r\n")] = '\0';

    char lengkap[100];
    snprintf(lengkap, sizeof(lengkap), "%s %s", depan, belakang);

    int count = 0;
    for (int i = 0; lengkap[i] != '\0'; i++) {
        if (lengkap[i] != ' ') count++;
    }

    printf("Nama Lengkap: %s\n", lengkap);
    printf("Panjang Nama (tanpa spasi): %d\n", count);
    return 0;
}