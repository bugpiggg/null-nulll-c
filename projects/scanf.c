#include <stdio.h>
#include <stdlib.h>
#define _countof(_Array)  sizeof(_Array) / sizeof(_Array[0])


int main(void) {
    // char c = 0;
    // scanf("%c", &c);
    // printf("입력한 문자는 %c 입니다.", c);

    char szBuffer[4] = { 0 };
    scanf("%4c", szBuffer);
    printf("%c%c%c%c\n", szBuffer[0], szBuffer[1], szBuffer[2], szBuffer[3]);

    return 0;
}