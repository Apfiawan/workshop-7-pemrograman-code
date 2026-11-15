#include <stdio.h>
#define MAKS 20

void pemasukan_data(float x[], int *pjumlah);
void pengurutan_data(float x[], int jumlah);
void penampilan_data(float x[], int jumlah);

int main() {
    float data[MAKS];
    int jum_data;

    pemasukan_data(data, &jum_data);
    pengurutan_data(data, jum_data);
    penampilan_data(data, jum_data);

    return 0;
}

void pemasukan_data(float x[], int *pjumlah) {
    int jum, i;

    printf("Jumlah data (maksimal %d): ", MAKS);
    scanf("%d", &jum);

    if (jum < 1)
        jum = 1;
    if (jum > MAKS)
        jum = MAKS;

    for (i = 0; i < jum; i++) {
        printf("Data ke-%d: ", i + 1);
        scanf("%f", &x[i]);
    }

    *pjumlah = jum;
}

void pengurutan_data(float x[], int jumlah) {
    int i, j;
    float smtr;

    for (i = 0; i < jumlah - 1; i++) {
        for (j = i + 1; j < jumlah; j++) {
            if (x[i] > x[j]) {
                smtr = x[i];
                x[i] = x[j];
                x[j] = smtr;
            }
        }
    }
}

void penampilan_data(float x[], int jumlah) {
    int i;

    printf("\nData setelah diurutkan:\n");

    for (i = 0; i < jumlah; i++) {
        printf("Data ke-%d: %.2f\n", i + 1, x[i]);
    }
}