#include <stdio.h>

int main(void) {
    int score = 0;
    scanf("%d", &score);

    printf("결과: %s", score >= 80 ? "합격" : "불합격");

    return 0;
}