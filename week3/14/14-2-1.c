/*
14-2 다른 풀이
*/
#include <stdio.h>
#include <string.h>

int str2Int(char *str);

int main(void)
{
    char buf[] = "1234";
    int num;

    //sscanf(buf, "%d", &num);    // buf문자열에서 %d형식으로 데이터를 읽어서 num이라는 변수의 주소에 저장한다.
                                //대형프로젝트에서는 속도가 느리다.
    num = str2Int(buf);
    printf("%d + %d = %d\n", num, 15, num + 15);

}
int str2Int(char *str)
{
    int i, product = 1;
    int res = 0;

    for(i = strlen(str) -1; i >=0; i--) {
        res += (str[i] - '0') * product;
        product *= 10;
    }

    return res;
    // "1234"

    // res = ('4' - '0') * 1
    // res = ('3' - '0') * 10
    // res = ('2' - '0') * 100
    // res = ('1' - '0') * 1000
}