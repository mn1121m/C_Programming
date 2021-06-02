/*
구조체
practice 18 - 4

소요: 0.5H

*/
#include <stdio.h>

//좌표
struct point {
    double x;
    double y;
};
typedef struct point point;

//기울기, y절편
struct line {
    double slope;
    double yintercept;
};
typedef struct line line;

double cal2Slope(point p1, point p2);
double cal2Yintercept(point p1, double s1);

int main(void)
{
    point p1, p2;
    double slopeValue;  //기울기 값
    double yValue;      //y절편 값

    printf("입력(1)\n");
    scanf("%lf %lf", &p1.x, &p1.y);
    getchar();

    printf("입력(2)\n");
    scanf("%lf %lf", &p2.x, &p2.y);
    getchar();

    slopeValue = cal2Slope(p1, p2);
    yValue = cal2Yintercept(p1, slopeValue);
    printf("결과 : %.1lf %.1lf", slopeValue, yValue);

    return 0;
}
double cal2Slope(point p1, point p2)
{
    double res;

    res = (p2.y - p1.y) / (p2.x - p1.x);

    return res;
}
double cal2Yintercept(point p1, double s1)
{
    double yres;

    yres = p1.y - s1 * p1.x;
    
    return yres;
}
/*
입력(1)
100 100
입력(2)
200 200
결과 : 1.0 0.0%   
------------------------------
입력(1)
0 -60
입력(2)
150 30
결과 : 0.6 -60.0%  
*/