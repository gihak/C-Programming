
#include <stdio.h>
#include <math.h>

int main (void){

    /*
        printf ("이름: 홍길동\n");
    printf ("나이: 21살\n");
    printf ("주소: 서울 200번지\n");

    printf ("\nHello\nC\nProgrammers!\n");

    printf ("---------------------------------------\n");
    printf ("            학과: 컴퓨터공학과\n");
    printf ("            학번: 0001\n");
    printf ("            성명: 홍길동\n");
    printf ("---------------------------------------\n");


    printf("---------------------------------------\n");
    printf("%19s%s\n", "학과:", " 컴퓨터공학과");
    printf("%19s%s\n", "학번:", " 0001");
    printf("%19s%s\n", "성명:", " 홍길동");
    printf("---------------------------------------\n");


    printf("일\t월\t화\t수\t목\t금\t토\t\n");
    printf("1\t2\t3\t4\t5\t6\t7\t\n");
    printf("8\t9\t10\t11\t12\t13\t14\n");
    printf("15\t16\t17\t18\t19\t20\t21\n");
    printf("22\t23\t24\t25\t26\t27\t28\n");
    printf("29\t30\t31\t\n");


    printf ("7+8=%d\n", 7+8);
    printf ("7-8=%d\n", 7-8);
    printf ("7*8=%d\n", 7*8);
    printf ("7/8=%d\n", 7/8);

    printf ("Interger: %d\n", 10);
    printf ("Float: %f\n", 10.001);
    printf ("Character: %d\n", 'A');
    printf ("String: %s\n", "This is a string");

    printf ("\nThis is a string and a number: %s, %d", "Hello", 10);

    printf ("\n%50s", "Hello\n"); //alligns to the right of 50 units
    printf ("\n%-10s", "Hello\n"); //alligns to the left of 10 units

    printf ("\n%f", 1.24343234232); //7 sig fig
    printf ("\n%10.3f", 1.24343234232); //4 sig fig
    printf ("\n%-10.3f", 1.24343234232); //alligns to the left, 4 sig fig
    printf ("\n%0.1f", 1.24343234232); //1 sig fig



    int x;
    int a;              // int (10진수)
    unsigned int b;     // unsigned int
    short s;            // short
    long l;             // long
    long long ll;       // long long

    float f;            // float
    double d;           // double
    long double ld;     // long double

    char c;             // char (문자 1개)
    char str[100];      // 문자열

    printf("정수 입력 (int): ");
    scanf("%d", &a);

    printf("부호 없는 정수 입력 (unsigned): ");
    scanf("%u", &b);

    printf("short 입력: ");
    scanf("%hd", &s);

    printf("long 입력: ");
    scanf("%ld", &l);

    printf("long long 입력: ");
    scanf("%lld", &ll);

    printf("float 입력: ");
    scanf("%f", &f);

    printf("double 입력: ");
    scanf("%lf", &d);

    printf("long double 입력: ");
    scanf("%Lf", &ld);

    printf("문자 입력: ");
    scanf(" %c", &c); // 앞에 공백 넣어서 개행 문자 무시

    printf("문자열 입력: ");
    scanf("%s", str); // 문자열은 배열 이름 자체가 포인터

    printf("\n===== 결과 출력 =====\n");
    printf("int: %d\n", a);
    printf("unsigned: %u\n", b);
    printf("short: %hd\n", s);
    printf("long: %ld\n", l);
    printf("long long: %lld\n", ll);
    printf("float: %f\n", f);
    printf("double: %lf\n", d);
    printf("long double: %Lf\n", ld);
    printf("char: %c\n", c);
    printf("string: %s\n", str);
 


    int x, y;
    int sum;


    printf ("\nEnter your first number: ");
    scanf ("%d", &x);

    printf ("\nEnter your second number: ");
    scanf ("%d", &y);

    sum = x + y;

    printf ("\nThe sum of x and y = %d", sum);
    return 0;



    float radius_x;
    float area;
    float perimeter;

    printf ("Enter an integer: ");
    scanf ("%f", &radius_x);

    area = M_PI * pow(radius_x, 2);
    printf ("Area of the cirle = %f\n", area);
    printf ("Area of the cirle = %0.1f\n", area);
    printf ("Area of the cirle = %50f\n", area);
    
    
    perimeter = 2 * radius_x * M_PI;
    printf ("The perimeter = %f\n", perimeter);
    printf ("The perimeter = %0.1f\n", perimeter);
    printf ("The perimeter = %50f\n", perimeter);


    int salary;
    float years;

    printf ("What is your yearly salary?: ");
    scanf ("%d", &salary);
    salary = salary * 10000;

    years =  1000000000.0 / salary; // Use .0 to result in float
    printf ("It takes %0.2f", years);
    printf (" to save 1,000,000,000 WON");
   

    float mile;
    double meter;

    printf ("How much miles is it? ");
    scanf ("%f", &mile);

    meter = 1609.0 * mile;

    printf("%.1f miles is %.2f meters\n", mile, meter);



    float area, height, base;

    printf ("Triangle's base: ");
    scanf ("%f", &base);

    printf ("Triangle's height: ");
    scanf ("%f", &height);

    area = 0.5 * height * base;
    printf ("Triangle's area is %.2f ", area);



    double celcius, farenheit;

    printf ("How much Farenheit is it? ");
    scanf ("%lf", &farenheit);

    celcius = (5.0 / 9.0) * (farenheit - 32.0);
    
    printf ("It is %.2lf", celcius);



    float x;
    float polynomial;

    printf ("Enter x: ");
    scanf ("%f", &x);

    polynomial = 3*x*x + 7*x + 11;
    printf ("The answer is %.2f", polynomial);

*/




}



