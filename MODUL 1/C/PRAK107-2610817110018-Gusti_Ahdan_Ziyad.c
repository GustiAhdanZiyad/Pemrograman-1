#include <stdio.h>

int main() {
    int side1 = 4, side2 = 5, side3 = 7;
    int price_per_meter = 85000;
    int perimeter = side1 + side2 + side3;
    int total_cost = perimeter * price_per_meter;

    printf("Diketahui:\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", side1, side2, side3);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", perimeter);
    printf("Harga tanah Per Meter adalah %d\n", price_per_meter);
    printf("Jawaban:\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah: Rp %d\n", total_cost);
    return 0;
}