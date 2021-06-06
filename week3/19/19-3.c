/*
practice 19 - 3 다시()
3. 사용자로부터 년,월,일을 입력받고 입력받은 날짜의 다음 날을 출력하는 프로그램을 작성하려 한다.

∙입력받은 날짜를 하루 증가시켜 새로운 날짜를 구하는 작업은 함수로 구현한다. 
    함수는 년,월,일의 3가지 필드를 가지는 날짜 구조체를 매개변수로 받고 날짜가 하루 경과된 새로운 날짜 구조체를 반환한다.
∙구조체의 각 필드 데이터형은 정수로 선언한다.
∙ 주어진 날짜가 그 달의 마지막 날일 경우 달을 바꾸어야 하며, 달이 12이고 날짜가 31인 경우 연도를 바꾸어야 한다.
∙ 연도가 다음 2가지의 경우 중 하나에 해당되면 윤년에 해당한다.
    - 4로 나누어지면서 100으로 나누어지지 않을 경우
    - 400으로 나누어질 경우
∙ 입력검증 : 월(1~12)와 일(1~31)의 정보는 제대로 입력되었는지 확인하여야 한다. 
    윤년이 아닌 경우 2월 29일이 입력되면 안되며 4월달의 경우도 31일이 입력되면 안된다. 
    만약 입력이 올바르지 않을 경우 wrong input을 출력한다.

참고) 윤년은 보통 4년에 한번 씩 찾아옵니다. => 2월 29일(4년에 한번)
    윤년의 공식 -> 4로 나누어 떨어지지만, 100으로는 나누어 떨어지지 않는다.
level : 상
*/

#include <stdio.h>

typedef struct _tomorrow {
    int year;
    int month;
    int day;
} Tomorrow;

void printTomorrow(int y, int m, int d); // 다음날을 출력하는 함수
int main(void)
{
    Tomorrow tomorrow;

    printf("오늘 날짜(년, 월, 일)을 공백으로 구분하여 입력하시오.\n");
    scanf("%d %d %d", &tomorrow.year, &tomorrow.month, &tomorrow.day);

    printTomorrow(tomorrow.year, tomorrow.month, tomorrow.day);
    return 0;
}
void printTomorrow(int y, int m, int d)
{
    static int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // 윤년인지 아닌지 판단한다. 
    if(y % 4 == 0 && y % 100 != 0) {
        days[2] = 29;
    } 
    else if( y % 400 == 0 ) {
        days[2] = 29;
    }

    if(d > days[m] || m < 1 || m > 12 || y < 0) {
        printf("날짜 입력 오류\n");
        return;
    }
    // Increase next day
    d++;
    // if It's bigger than the last day, It's changed to next month, and It's changed to 1st.
    if(d > days[m]) {   
        d = 1;
        m++;    
        // If it's bigger than the last month, It increases the year by one year.
        if( m == 13) {
            m = 1;
            y++;    
        }
    }
    // print
    printf("다음 날: %d년 %d월 %d일 입니다. \n", y, m , d);
    // 윤년 초기회
    if( days[2] == 29) {
        days[2] = 28;
    }
    return;
}