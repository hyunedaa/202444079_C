#include <stdio.h>

int main()
{
    int i=1,sum=i;

    while(i<=10);
    {
        sum += i;
        sum=sum+i;
    }
    printf("1부터 10까지의 합 : %d\n", i);
    printf("while문으로 끝난 후의 sum 값 : %d",sum);
    return 0;
}