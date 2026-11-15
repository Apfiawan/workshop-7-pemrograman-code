#include <stdio.h>
#define JUM_KOLOM 2
#define MAX_KAR 256

int main() {
    char konversi[][JUM_KOLOM] = {
        {'A','T'}, {'E','M'}, {'I','V'},
        {'O','S'}, {'U','J'}, {'T','A'},
        {'M','E'}, {'V','I'}, {'S','O'},
        {'J','U'}
    };

    char kalimat[MAX_KAR];
    char karakter;
    int i, j;
    int jum_penyandi;

    printf("Masukkan sebuah kalimat: ");

    if (fgets(kalimat, MAX_KAR, stdin) == NULL)
        return 1;

    jum_penyandi = sizeof(konversi) / sizeof(konversi[0]);

    printf("Hasil setelah disandikan: ");

    for (i = 0; kalimat[i] != '\0' &&
                kalimat[i] != '\n'; i++) {
        karakter = kalimat[i];

        for (j = 0; j < jum_penyandi; j++) {
            if (karakter == konversi[j][0]) {
                karakter = konversi[j][1];
                break;
            }
        }

        printf("%c", karakter);
    }

    printf("\n");

    return 0;
}