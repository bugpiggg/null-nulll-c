#include <stdio.h>

int main(void) {
    int nAge = 0;
    int nAge2 = 0;
    char ch;
    char szName[32] = { 0 };
    char szName2[32] = { 0 };

    printf("나이를 입력하세요 :");
    scanf("%d", &nAge);

    printf("이름을 입력하세요 :");
    // fgets(szName, 32, stdin);
    // scanf("%d", &nAge2);
    scanf("%s", &ch);

    printf("%d %s\n", nAge, ch);
    return 0;
}