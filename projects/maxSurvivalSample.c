#include <stdio.h>

int main(void) {
    int n = 0;
    scanf("%d", &n);

    int a = 0;
    scanf("%d", &a);
    n = a > n ? a : n;

    scanf("%d", &a);
    n = a > n ? a : n;

    printf("MAX : %d", n);

    return 0;
}