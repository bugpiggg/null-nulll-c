#include <stdio.h>

int main(void) {
    int input = 0;
    int sum = 0;

    scanf("%d", &input);
    sum += input;

    scanf("%d", &input);
    sum += input;

    scanf("%d", &input);
    sum += input;

    printf("%d", sum);

    return 0;
}