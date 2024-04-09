#include <stdio.h>

int main()
{
    int n,i=1,sum=0;
    scanf("%d",&n);

    while(1)
    {
        if(i%2 == 0)
        {
            sum=sum+i;
        }
        i++;
        if(i>n)
        {
            break;
        }
    }
    printf("%d",sum);
    return 0;
}