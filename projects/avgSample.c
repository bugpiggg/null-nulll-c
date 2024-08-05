#include <stdio.h>

int main(void) {
    int a = 0, b = 0;
    scanf("%d%d", &a, &b);

    double avg  = (a+b) / 2.0;
    printf("AVG : %.2lf", avg);

    return 0;
}