
/*
// 우선 순위와 결합법칙 -> 중요
// 조건 연산자 중요
// 나머지 연산자 -> 홀짝
// 나눗셈 연산자. 중요. 정수 나누기 정수 = 정수. 실수 나누기 실수 = 실수
// 6 / 4 = 1
// 6 // 4 = 1.5

#include <stdio.h>
int main (void) {


printf ("%d6 / 4: \n", 6/4); // use %d

printf ("%f6.0 / 4.0: \n", 6.0/4.0); // use %f

printf ("%f 6 / 4.0: \n", 6/4.0); // 실수값 출력


int x;
float y;
y = 6.0/4.0;

// (float) 6/4 -> 형변환

printf ("%fY: ", y);

    return 0;
}

*/



// x++ => x = x + 1
// x-- => x = x - 1
// ++x => 

// x=1, y=2
// z = x +++ y++ => x=2, y=3, z=3, z=5가 아님. 그냥 x=1, y=2을 이용해서 3이됨

//x = 0;
//printf ("%d %d %d\n", x++, x, x++); //1 2 0, in this case calculation order is (3항, 1항, 2항) => calculation order is not in order
//printf ("%d \n", x); // 2
//printf ("%d %d %d\n", x++, x++, x); // 3 2 4, in this case calculation order is (2항, 1항, 3항) => calculation order is not in order
//printf ("%d \n", x); // 4

#include <stdio.h>
int main (void) {

int x = 5;
int y = ++x; // x becomes 6, then y is assigned 6
// Now, x is 6 and y is 6


int a = 5;
int b = a++; // a is assigned 5, then a becomes 6
// Now, a is 6 and b is 5

    return 0;
}

/*
x=3
if (x=4)
    s1;

else s2;

참이라서 s1, 실행. 0만 거짓????

*/
