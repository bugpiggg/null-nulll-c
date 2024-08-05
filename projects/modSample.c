#include <stdio.h>

int main(void) {
    int x = 0;
    scanf("%d", &x);

    printf("%d\n", x / 3);
    printf("%d\n", x % 3);


    double y;
    // 정수끼리의 나눗셈은 무조건 정수가 출력됨
    y = x / 3.0;

    printf("%lf\n", y);

    // 이상한 값이 출력됨
    printf("%d\n", y + 2);

    return 0;
}