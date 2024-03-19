#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    system("title 정수 2개 입력받아 덧셈 연산");

    int num1, num2, hap;
    printf("1.첫 번째 정수 입력:");
    scanf("%d", &num1);

    printf("2.두 번째 정수 입력:");
    scanf("%d", &num2);

    printf("3. 덧셈 결과 : %d + %d = %d\n", num1, num2, num1+num2);
    printf("3. 빼기 결과 : %d - %d = %d\n", num1, num2, num1-num2);
    printf("3. 곱셈 결과 : %d * %d = %d\n", num1, num2, num1*num2);
    printf("3. 나눗셈 결과 : %d / %d = %f\n", num1, num2, (float)num1/num2);
}
