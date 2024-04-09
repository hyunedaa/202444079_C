#include <stdio.h>

int main()
{
    int x,y;
    char op;

    scanf("%d %c %d",&x ,&op ,&y);

    printf("%d %c %d = %d",x,op,y,x+y);
}