#include <stdio.h>
#define MAKS 5

int main() {
    int i;
    float total = 0, rata;
    float nilai_tes[MAKS];

    for (i = 0; i < MAKS; i++) {
        printf("Nilai tes ke-%d: ", i + 1);
        scanf("%f", &nilai_tes[i]);
        total += nilai_tes[i];
    }

    rata = total / MAKS;
    printf("Nilai rata-rata = %.2f\n", rata);

    return 0;
}