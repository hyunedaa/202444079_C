#include <stdio.h>

int main()
{
    int score[]={87,92,89,98,78};
    int cnt;

    for(int i=0; i<sizeof(score)/sizeof(score[0]);i++)
    {
        printf("score[%d] = %d\n", i ,score[1]);

    }
    return 0;
}


