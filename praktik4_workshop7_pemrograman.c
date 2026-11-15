#include <stdio.h>

int main() {
    int tahun, kode_program;

    int data_lulus[4][3] = {
        {80, 540, 1032},
        {15, 83, 301},
        {8, 12, 15},
        {10, 129, 257}
    };

    printf("Masukkan tahun (1998-2000): ");
    scanf("%d", &tahun);

    printf("Kode kursus (1=INTRO, 2=BASIC, 3=PASCAL, 4=C): ");
    scanf("%d", &kode_program);

    if (tahun < 1998 || tahun > 2000 ||
        kode_program < 1 || kode_program > 4) {
        printf("Input tidak valid\n");
        return 1;
    }

    printf("Total kelulusan program tersebut = %d\n",
           data_lulus[kode_program - 1][tahun - 1998]);

    return 0;
}