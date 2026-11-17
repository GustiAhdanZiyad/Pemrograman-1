#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char kata[100];
    if (scanf("%s", kata) != 1) return 1;
    
    int len = strlen(kata);
    for (int i = 0; i < len; i++) {
        kata[i] = tolower(kata[i]);
    }

    int is_palindrom = 1;
    for (int i = 0; i < len / 2; i++) {
        if (kata[i] != kata[len - 1 - i]) {
            is_palindrom = 0;
            break;
        }
    }

    if (is_palindrom)
        printf("Kata '%s' adalah palindrom\n", kata);
    else
        printf("Kata '%s' bukan palindrom\n", kata);
    return 0;
}