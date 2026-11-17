#include <stdio.h>
#include <string.h>

int main(void) {
    char deskripsi[500];
    if (fgets(deskripsi, sizeof(deskripsi), stdin) == NULL) return 1;
    deskripsi[strcspn(deskripsi, "\r\n")] = '\0';

    if (strlen(deskripsi) > 20) {
        deskripsi[20] = '\0';
        printf("%s...\n", deskripsi);
    } else {
        printf("%s\n", deskripsi);
    }
    return 0;
}