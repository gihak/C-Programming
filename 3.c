#include <stdio.h>

int main(void) {
    int a = 20; // 선언과 초기화를 동시에
    int b = 40; // 선언과 초기화를 동시에

    // 여러 변수 동시 선언 => int a, b, c; 

    // 수정 가능 지역
    int c = a; // c에 a의 값을 복사
    a = b;
    b = c;

    // 수정 가능 지역 끝
    
    printf ("==문제 시작==\n");
    
    printf("a : %d\n", a);
    //프린트 a : 40

    printf("b : %d\n", b);
    //프린트 b : 20
    return 0;
}