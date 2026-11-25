#include <stdio.h>

struct Dompet {
    char nama[30];
    int saldo;
};

void topUp(struct Dompet *d, int nominal){
    d->saldo += nominal;
    printf("Top up %d berhasil, saldo = %d\n",
           nominal, d->saldo);
}

void bayar(struct Dompet *d, int nominal){
    if(d->saldo >= nominal){
        d->saldo -= nominal;
        printf("Bayar %d berhasil, saldo = %d\n",
               nominal, d->saldo);
    } else {
        printf("Bayar %d gagal, saldo tidak cukup\n",
               nominal);
    }
}

int main(){
    struct Dompet dompet;
    int n;
    scanf("%s %d", dompet.nama, &dompet.saldo);
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        char jenis;
        int nominal;
        scanf(" %c %d", &jenis, &nominal);

        if(jenis == 'T'){
            topUp(&dompet, nominal);
        } else if(jenis == 'B'){
            bayar(&dompet, nominal);
        }
    }

    printf("Saldo akhir %s = %d\n",
           dompet.nama, dompet.saldo);

    return 0;
}
