/*************************************************************

[1] 학생 2명의 영어 및 국어 점수(0~100점의 자연수)와 이름(알파벳 3자 이하)을 
각각 입력받아 각 학생의 이름, 영어, 국어 점수를 출력하는 프로그램 작성

**************************************************************/
/*

#include <stdio.h>

int main (void) {

    // 학생 1, 2의 이름 변수 선언
    // char n1c1, n1c2, n1c3; // 학생1 이름을 한 글자씩 저장할 변수 3개. scanf에서 한 글자씩 입력 받도록 변수 선언
    // char n2c1, n2c2, n2c3; // 학생2 이름을 한 글자씩 저장할 변수 3개

    char stu_1 [4]; // 학생1의 이름을 저장할 1차원 배열. 최대 3글자 + 문자열 끝에 오는 null (\0) 포함해서 크기를 4로 설정
    char stu_2 [4]; // 학생2의 이름을 저장할 1차원 배열
                    // 1차원 배열(array): 어떤 한가지 자료형 (int, char등) 을 연속적으로 나열하는 것
                    // 배열명은 stu_1, stu_2 이고 배열의 크기는 4. 이 배열에는 정수값이 기억됨
    
    int kor_score1, eng_score1; // 학생1의 영어, 국어 점수 변수 선언
    int kor_score2, eng_score2; // 학생2의 영어, 국어 점수 변수 선언

    // 학생1의 입출력
    printf("학생 1의 이름을 입력하시오: ");
    scanf(" %3s", stu_1); // %3s => 최대 3글자까지 읽음. & 붙일 필요 없음.

    printf("학생 1의 영어 점수를 입력하시오: ");
    scanf("%d", &eng_score1); // “%d는 정수를 입력받을 때 쓰고, &는 ‘이 변수의 주소에 값을 저장

    printf("학생 1의 국어 점수를 입력하시오: ");
    scanf("%d", &kor_score1);


    // 학생2의 입출력
    printf("\n학생 2의 이름을 입력하시오: ");
    scanf(" %3s", stu_2);  // %3s => 최대 3글자까지 읽음

    printf("학생 2의 영어 점수를 입력하시오: ");
    scanf("%d", &eng_score2);

    printf("학생 2의 국어 점수를 입력하시오: ");
    scanf("%d", &kor_score2);

    // 결과 출력
    printf("\n========================== RESULT ==========================\n");
    printf("학생 1의 이름: %s, 영어 점수: %d점, 국어 점수: %d점\n", stu_1, eng_score1, kor_score1); // 서식 지정자와 실제 변수의 값 연결. 학생 1의 이름, 영어 점수, 국어 점수 출력
    printf("학생 2의 이름: %s, 영어 점수: %d점, 국어 점수: %d점\n", stu_2, eng_score2, kor_score2); // 학생 2의 이름, 영어 점수, 국어 점수 출력

    return 0;
}
*/




/*********************************************************

[2] 한 학생의 영어 및 국어 점수(0~100점의 자연수)와 이름(알파벳 1자)을 
순서대로 한줄에 입력받아 아래와 같은 형태로 출력하는 프로그램 작성

<출력 형식>
NAME     ENGLISH      KOREAN
         SCORE        SCORE
D        99           92

**********************************************************/

/*
#include <stdio.h>  // 표준 입출력 함수 사용을 위해 stdio.h 헤더 파일을 포함

int main (void) {
    // 변수 선언
    int eng_score, kor_score; // 학생의 영어 점수와 국어 점수를 저장할 정수형 변수 선언
    char stu_name; // 학생의 이름 첫 글자를 저장할 문자형 변수 선언
    
    // 유저에게 입력 메시지 출력
    printf ("학생의 영어 점수, 국어 점수, 이름을 입력하시오: ");
    
    // 사용자로부터 영어 점수, 국어 점수, 이름을 입력받음
    // 순서대로 eng_score, kor_score, stu_name 변수에 저장
    // & : 변수의 주소를 의미. scanf는 입력값을 변수에 저장하기 위해 주소가 필요
    scanf("%d %d %c", &eng_score, &kor_score, &stu_name); 

    // 결과 출력
    printf ("\n============= RESULT =============\n"); // 가독성을 위해

    printf("NAME\tENGLISH\tKOREAN\n");       
    printf("\tSCORE\tSCORE\t\n");        
    printf("%c\t%d\t%d\t\n", stu_name, eng_score, kor_score); 
 

    return 0; 
}
*/





/************************************************************

[3] 학생의 영어 및 국어 점수(0~100점의 자연수)와 이름(알파벳 1자)을 
아래와 같이 한줄에 하나씩 입력받아 다음과 같은 형태로 출력하는 프로그램 작성
<입력 예시>: 은 입력 데이타
Eng: 99
Kor: 92
Name: S

<출력 형식>
NAME     ENGLISH      KOREAN
         SCORE        SCORE
D        99           92

**************************************************************/

/*
#include <stdio.h>

int main (void){

    char stu_name; // 학생 이름을 한 글자만 저장할 변수
    int eng_score, kor_score; // 학생 영어 점수, 국어 점수 저장  

    printf("Eng: ");             // 영어 점수 입력 
    scanf("%d", &eng_score);     // 영어 점수를 eng_score 변수에 저장

    printf("Kor: ");             // 국어 점수 입력 
    scanf("%d", &kor_score);     // 국어 점수를 kor_score 변수에 저장

    printf("Name: ");            // 이름 입력 
    scanf(" %c", &stu_name);     
                       
    // 결과 출력
    printf ("\n============= RESULT =============\n"); // 가독성을 위해
    printf("NAME\tENGLISH\tKOREAN\n");       
    printf("\tSCORE\tSCORE\t\n");        
    printf("%c\t%d\t%d\t\n", stu_name, eng_score, kor_score); 

    return 0;
}
*/



