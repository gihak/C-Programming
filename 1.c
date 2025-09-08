//include는 무언가를 가져온다. <stdio.h>는 표준 입출력 라이브러리. 
// stdio는 standard input (표준 입력, Keyboard) output(표준 출력, Monitor)의 약자
#include <stdio.h> 


//int : 함수의 리턴 타입
//return 0 : 함수의 리턴 value
int main(void) { //main 함수는 프로그램의 시작점. 메인함수 생성
    printf("Hello, World!\n");
    printf("Hello, Gihak!\n");
    printf("안녕\n하세여!\n");


    printf("저는 홍길동입니다.\n");
    printf("만나서 반갑습니다, 저는 \"김기학\" 입니다.\n");


    printf ("15\n"); //15 출력. 문자로 출력
    printf ("번호 : %d\n나이 : %d\n", 15, 20); //15 출력. 정수로 출력. %d는 10진수 정수형 포맷 지정자
    

    // 문장 :""로 감싸야함
    // 문자 : ''로 감싸야함
    // ; : 문장의 끝을 나타냄
    // \n : 개행문자, 줄바꿈 문자

    return 0;
}

//기본 C언어 프로그램 구조