#include <stdio.h>

int main() {
    int bulan, tahun, jhari;

    int jum_hari[12] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    printf("Masukkan bulan (1-12): ");
    scanf("%d", &bulan);

    printf("Masukkan tahunnya: ");
    scanf("%d", &tahun);

    if (bulan < 1 || bulan > 12) {
        printf("Bulan tidak valid\n");
        return 1;
    }

    if (bulan == 2) {
        if ((tahun % 400 == 0) ||
            (tahun % 4 == 0 && tahun % 100 != 0))
            jhari = 29;
        else
            jhari = 28;
    } else {
        jhari = jum_hari[bulan - 1];
    }

    printf("Jumlah hari dalam bulan %d tahun %d adalah %d hari\n",
           bulan, tahun, jhari);

    return 0;
}