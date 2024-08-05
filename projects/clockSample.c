#include <stdio.h>

int main(void) {
    int sec = 0;
    scanf("%d", &sec);

    printf("%d초는 %d시간 %d분 %d초 입니다.", 
        sec,
        sec / 3600,
        (sec % 3600) / 60,
        sec % 60 
    );
}