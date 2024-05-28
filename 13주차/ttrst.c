#include <stdio.h>

int main()
{
    int a[10]={1,2,3,4,5};
    int *pa;
    pa = a;

    printf("포인터 현재 주소값 : %d\n", pa);
    printf("포인터 현재 데이터 값 : %d\n", *a);
    printf("포인터 *++pa 사용 : %d\n", *++pa);
    printf("포인터 *++pa 사용후 주소 값 : %d\n", pa);
    printf("포인터 ++*pa 사용 : %d\n", ++*pa);
    printf("포인터 주소값 결과 : %d\n", pa);
    return 0;
}