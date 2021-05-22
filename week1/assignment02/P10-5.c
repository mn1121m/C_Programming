/* Pratice 10 - [문제] => 다시(0)()
5. 오일러 상수(Euler’s constant)는 2.71828이고 이는 지수 함수 에서 일 때를 표현하 기도 한다. 
연속한 2개의 오일러 상수의 차이가 0.0000001보다 작을 때까지의 오일러 상수를 구하는 프로그램을 작성하시오.
*/

#include <stdio.h>

#define TRUE 1

double e(int t);        //exponensial : 지수, 오일러 상수 
unsigned long long factorial(int n);    //unsigned는 더 많은 양수를 표현할때 사용, long long은 8바이트이고, 표현의 범위가 넓다.

int main(void)
{
    int t;  //몇번돌았는지 => times  /   1/0! + 1/1! + 1/2!
    double e1, e2;
    t = 1;  // times: 1         1/0! + 1/1!

    while(TRUE) {  
        e1 = e(t - 1);
        e2 = e(t);
        if(e2 - e1 < 0.0000001) break;
        t++;
    }
    printf("t1 == %d, e1 == %lf\n", t - 1, e1);
    printf("t2 == %d, e1 == %lf\n", t, e2);

    return 0;
}
double e(int t)
{
    double res = 1.0;   // t = 0 , 1/0!
    int i;

    for(i = 1; i < t + 1; i++) {    // t = 1부터 실행, 한번은 무조건 실행된다. (i = 1이고, i < t + 1이므로)
        res += 1.0/factorial(i);
    }
    return res;
}
unsigned long long factorial(int n)
{
    if(n == 0 || n == 1) return 1;
    return n*factorial(n - 1);

}