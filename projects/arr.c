#include <stdio.h>

int main(void) {
    char szName[32] = { 0 }; // 모두 0 으로 초기화

    // gets(szName);
    fgets(szName, 32, stdin);

    puts(szName);

    return 0;
}