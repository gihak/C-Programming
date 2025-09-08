#include <stdio.h>

int main(void) {
    printf("Hello, World!\nHello, World!\nHello, World!\nHello, World!\nHello, World!\nHello, World!\n");
    
    // 변수의 특징: 
    // 변수 타입 : 자료형
    // int :  10진수 정수형
    // float : 실수형
    // char : 문자형
    
    int x = 20; // 선언과 초기화를 동시에
    printf("x : %d\n", x); // 변수 사용. x는 그냥 값, 변수가 아님. = 이거를 기준으로 좌측에는 variable 우측에는 value

    //변수는 중복 선언 금지
    // int x = 30; // 선언과 초기화를 동시에
    // printf("x : %d\n", x);

    x = 30; // 변수의 재활용. 값 변경
    printf("x : %d\n", x);

    x = x + 10; // x의 기존 값에 10을 더한 후 다시 x에 저장
    printf("x : %d\n", x);

    return 0;


}