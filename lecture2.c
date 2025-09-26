//compile error, syntax error -> compiler가 오류지적
// debugging 
// 한 개의 에러라도 있으면 컴파일이 안됨. 한 개의 에러도 여러 개의 에러를 유발할 수 있음.
// semantic error(의미적 오류)
// logical error(논리적 오류) : 문법은 맞지만 논리가 에러
// link, object file


/*
#include <stdio.h>
 
    int main (void) {
        
        printf("Hello, World!\n");
        return 0; // return type이 int인데 float를 리턴해서 오류
    
}
*/


//function: 기본적인 단위,  printf function, scanf function

//logical, physical error


/*
#include <stdio.h> // standard input output library. eg math.h, string.h

int main(void) { // main function, 프로그램의 시작점
    
    int x =  100; // variable declaration and initialization at the same time
    int y =  200;


    // int x; // variable declaration
    // x = 100; // variable initialization

    // int x; x = 100.0011 -> error. int can store only integer value

    float f = 100.0011; // float can store decimal value

    int sum = x + y;

    char c = 'A'; // character type, single quote
    double d = 100.001123456; // double type, more precise than float
    long long int lli = 10000000000; // long long int type, can store larger integer value
    long int li = 100000; // long int type, can store larger integer value than int
    long double ld = 100.001123456789; // long double type, more precise than double
    
    printf("합은 : %d\n", sum);

    return 0; 

}
    // Function definition
    int sub(void) {
       
        printf("Hello, World!\n");
        
        return 0; 
}
*/


#include <stdio.h> // standard input output library

// Function declaration


// scanf syntax : scanf("format string", &var1, &var2, ...);
// & : address operator, 변수의 주소를 의미. scanf는 변수의 주소를 필요


int main (void) { // main function, 프로그램의 시작점
    
    int x, y, z, a; // variable declaration
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y); // Taking input for two integers
    scanf("%d, %d", &x, &y); // Taking input for two integers

    int sum = x + y; // Calculate the sum
    int multiplication = z * a; // Calculate the difference

    printf("합은 : %d\n", sum); // Print the sum
    printf("곱은 : %d\n", multiplication); // Print the sum

    return 0;

    //scanf: return, tab, space, enter are all treated as the same
}

// %c : character
// %d : decimal integer
// %f : float
// %lf : double
// %s : string
// %lld : long long int
