#include <stdio.h>

int main() {
    int troops = 958730;
    int heroes = 5;
    int result = troops / heroes;
    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", troops);
    printf("Jumlah pahlawan = %d\n", heroes);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", result);
    return 0;
}