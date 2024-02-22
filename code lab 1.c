#include <stdio.h>

int main() {
    int N, i = 1, 
    sum = 0;

    printf("Masukkan sebuah angka N:  ");
    scanf("%d", &N);

    while (i <= N) {
        sum += i;
        i++;
    }

    printf("Jumlah angka dari 1 hingga %d adalah: %d\n", N, sum);
    return 0;

}