#include <stdio.h>

int main(void) {
    int a = 0, b = 0;
    int temp = 0;

    scanf("%d%d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("a = %d b = %d", a, b);

    return 0;
}