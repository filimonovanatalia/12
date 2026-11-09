#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    int a[8][5];
    int sum = 0;
    double avg;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < 8; i++) {
        sum += a[i][2];
    }

    avg = (double)sum / 8.0;

    printf("%.2lf\n", avg);

    return 0;
}
