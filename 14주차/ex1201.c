#include <stdio.h>

int main(void)
{
    char sa[] ="Spacezone";
    char *ps ="Spacezone";
    int cnt;

    printf("\n배열 주소 값 : %d\n", sa);
    printf("포인터 주소 값 : %d\n", ps);

    printf("\n[배열 사용] \t [포인터 사용]\n");

    for(cnt =0; cnt < 9; cnt++)
    {
        printf("sa[%d] : %c\t\t",cnt,sa[cnt]);
        printf("*(ps + %d) : %c\n",cnt,*(ps + cnt));

    }
    return 0;
}
