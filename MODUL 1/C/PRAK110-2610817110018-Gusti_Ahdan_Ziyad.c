#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main()

{
    int base = 5;
    int height = 12;
    double side = sqrt((base * base) + (height * height));
    int perimeter = base + height + side;
    int area = (base * height) / 2;

    printf("Diketahui :\n");
    printf("Alas = %d cm\n", base);
    printf("Tinggi = %d cm\n", height);
    printf("\n");
    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", base);
    printf("Sisi B = %.0f cm\n", side);
    printf("Sisi C = %d cm\n", height);
    printf("Keliling = %d cm\n", perimeter);
    printf("Luas = %d cm\n", area);
    return 0;
}