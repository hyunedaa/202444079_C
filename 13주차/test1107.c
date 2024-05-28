#include <stdio.h>

int main(void)
{
    char c;
    char *pc;
    pc = &c;

    int i;
    int *pi;
    pi = &i;
    
    double d = 3.3058;
    double *pd;
    pd = &d;

    printf("1.포인터 증감 연산자 사용전 주소값\n");
    printf("char 형 포인터 주소값 : %d\n", pc);
    printf("int 형 포인터 주소값 : %d\n", pi);
    printf("double형 포인터 주소값 : %d\n", pd);

    *pc++;
    *pi++;
    *pd++;

    printf("\n2.포인터 *p++ 연산자 수행 후 주소값\n");
    printf("char형 포인터 주소값 : %d\n", pc);
    printf("int형 포인터 주소값 : %d\n", pi);
    printf("double형 포인터 주소값 : %d\n", pd);

    (*pd)++;

    printf("\n3.포인터 (*pd)++ 증감 연산 후 주소값과 데이터 값\n");
    printf("포인터 pd의 증감 연산 후 주소값: %u\n", pd);
    printf("포인터 pd의 증감 연산 후 데이터 값 %f\n", d);
    return 0;

}