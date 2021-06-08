/*
프로그래밍기초 실습 (Chapter 14. 함수와 포인터 활용) 
Practice 14 - 3

[프로그램 설명]
- 가변인자를 처리하는 함수 vafunc()의 다음 함수원형에서 첫 인자는 처리유형으로 
    문자 d이 면 int가 가변인자의 자료형이며, 
    첫 인자는 가변인자의 개수를 지정하며, 가변인자의 평균 을 반환하는 함수
*/
#include <stdio.h>
#include <stdarg.h>

double vafunc(char *type, int count, ...); //int count 이후는 가변인자

int main(void)
{

    printf("평균 %.2f\n", vafunc("d", 5, 172, 21, 36, 43, 58));
    printf("평균 %.2f\n", vafunc("f", 5, 5.8, 17.3, 2.8, 31.8, 45.9, 5.9));

    return 0;
}
double vafunc(char *type, int count, ...)
{
    double total = 0, avg;
    int i;

    //가변인자 선언
    va_list argp;

    //가변인자 처리 시작
    va_start(argp, count);  // va_start(가변인자 변수, 갯수)
    if(*type == 'd') {
        for(i = 0; i < count; i++) {
            total += va_arg(argp, int); //가변인자 처리시작
        }
    }
    else if(*type == 'f') {
        for(i = 0; i < count; i++) {
            total += va_arg(argp, double);
        }
    }
    //가변인자 처리 종료
    va_end(argp);
    avg = total / count;
    return avg;
}
/*
평균 66.00
평균 20.72
*/