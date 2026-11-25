#include <stdio.h>

int main(){
    int angka;
    scanf("%d", &angka);

    int *ptr = &angka;

    printf("Nilai variabel = %d\n", angka);
    printf("Alamat variabel = %p\n", (void *)&angka);
    printf("Nilai melalui pointer = %d\n", *ptr);

    *ptr = *ptr * 2;
    printf("Nilai setelah diubah lewat pointer = %d\n", angka);

    return 0;
}
