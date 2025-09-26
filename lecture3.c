/*
#include <stdio.h>
int main (void){
/*
변수 선언: 컴파일러에게 어떤 타입의 변수가 사용되는지 미리 알리는 것

수식은 결과값을 가진다
int x = y = 3;

3 * 4 / 3 -> operator priority (left to right)

"=" left to right

% 홀짝 구분



int x, y; 

// int a = b = 4;  ==> a의 값은 4 

x = 3; //x = 3 =>?
y = x * x - 5 * x + 6;

printf ("%d", y);

    return 0;
}
*/


#include <stdio.h>
int main (void){
    double num1, num2, num3;
    double sum, avg;

    printf ("3개의 실수를 입력: ");
    scanf ("%lf %lf %lf", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    avg = sum / 3.0; // 강한 타입으로 바뀜. 정수 /  정수 =  정수

    printf ("합계 = %.2lf\n", sum);
    printf ("평균 = %.2lf\n", avg);
}