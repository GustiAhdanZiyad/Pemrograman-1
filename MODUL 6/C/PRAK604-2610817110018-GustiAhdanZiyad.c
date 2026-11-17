#include <stdio.h>
#include <string.h>

int main(void) {
    char kode[100], pesan[100];
    if (fgets(kode, sizeof(kode), stdin) == NULL) return 1;
    if (fgets(pesan, sizeof(pesan), stdin) == NULL) return 1;
    kode[strcspn(kode, "\n")] = '\0';
    pesan[strcspn(pesan, "\n")] = '\0';
    
    kode[strcspn(kode, "\r")] = '\0';
    pesan[strcspn(pesan, "\r")] = '\0';

    if (strlen(kode) != strlen(pesan)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return 0;
    }

    int len = strlen(kode);
    int bintang = 0, pagar = 0;
    char hasil[len + 1];
    hasil[len] = '\0';

    for (int i = 0; i < len; i++) {
        if (kode[i] == ' ' && pesan[i] == ' ') {
            hasil[i] = ' ';
        } else if (kode[i] == pesan[i]) {
            hasil[i] = '*';
            bintang++;
        } else {
            hasil[i] = '#';
            pagar++;
        }
    }

    printf("%s\n", hasil);
    printf("*=%d\n", bintang);
    printf("#=%d\n", pagar);
    if (bintang >= pagar) {
        printf("Pesan Asli\n");
    } else {
        printf("Pesan Palsu\n");
    }
    return 0;
}