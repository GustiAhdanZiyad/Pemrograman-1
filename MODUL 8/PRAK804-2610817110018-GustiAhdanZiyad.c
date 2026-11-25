#include <stdio.h>

struct Peserta {
    char nama[30];
    int umur;
    int skor;
};

int main(){
    struct Peserta data[10];
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%s %d %d", data[i].nama,
              &data[i].umur, &data[i].skor);
    }

    int juara = 0;
    for(int i = 1; i < n; i++){
        if(data[i].skor > data[juara].skor){
            juara = i;
        }
    }

    printf("Peserta dengan skor tertinggi adalah %s "
           "dengan skor %d\n",
           data[juara].nama, data[juara].skor);

    return 0;
}
