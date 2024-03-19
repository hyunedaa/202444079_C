/*#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    system("title 정수형 데이터의 자릿수 지정 형석");

    printf("|%d|", 358);
    printf(": 정수형 기본 자릿수\n");

    printf("|%5d|", 358);
    printf(": 전체 자릿수 5개\n");

    printf("|%05d|", 358);
    printf(": 전체 자릿수는 5개이고 빈칸은 0으로 채움\n");

    printf("|%f|", 358.123456);

    printf("|%.2f|", 358.123456);

    printf("|%6.1f|", 358.123456);

    printf("|%-6.1f|", 358.123456);

    printf("|%7.3f|", 358.123456);

    printf("|%010.3f|", 358.123456);

    return 0;
} */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("첫번째 :");
    scanf("%d", &a);
    printf("\n출력 값%d", a);

    printf("두번째 :_____\b\b\b\b\b\b");
    scanf("%d", &b);
    printf("\n 출력값 : %d", b);

}