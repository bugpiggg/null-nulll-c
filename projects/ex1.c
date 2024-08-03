#include <stdio.h>

int main(void) {
    int age = 0;
    char name[35]= { 0 };

    printf("나이를 입력하세요: ");
    scanf("%d%*c", &age);

    printf("이름을 입력하세요: ");
    fgets(name, 35, stdin);

    printf("당신의 나이는 %d살이고 이름은 '%s' 입니다.", age, name);
    return 0;
}