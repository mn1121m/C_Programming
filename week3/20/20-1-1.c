/* 
practice 20 - 1 다시()

1. 텍스트 파일 이름을 입력받아 해당 파일의 내용을 읽어서 그 내용을 표준출력으로 출력하는 프로그램을 작성하시오. (2점)

프로그램 설명
∙파일의 이름을 입력받고 해당 파일을 읽기 모드로 연다.
∙반복문을 사용하여 텍스트 파일을 읽어 화면에 출력한다.
∙파일 입출력이 종료된 후에는 반드시 파일을 닫는다.

- 질문 - 
+ 파일의 이름을 입력받고 그것을 화면에 출력하는 것에 대한 구현과정..

cf) fgets(텍스트를 저장할 메모리의 주소, 메모리의 최대크기, 파일 포인터)
*/
#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 256

int main(int argc, char **argv)
{
    FILE *fp;
    char buf[MAX_LENGTH];
    int line_count = 0;

    scanf("%s", &buf);

    if((fp = fopen(buf, "r")) == NULL) {
        printf("Cannot open the file.\n");
        exit(EXIT_FAILURE);
    }

    while(fgets(buf, MAX_LENGTH, fp) != NULL) {
        printf("%s", buf);
    }

    fclose(fp);
    return 0;
}
/*
[data.txt]
=>
Founded in a garage in 1976 by Steve Jobs, Steve Wozniak, and Ronald Wayne, 
Apple began as a personal computer pioneer that today makes everything from laptops to portable media players. 
Headquartered in Cupertino, California, the consumer electronics giant entered the smartphone market with the iPhone in 2007
, and the tablet market with the iPad in 2010, and the smartwatch market with the Apple Watch in 2014.%   

[test.txt]
=>
Apple has big plans for the MacBook Pro in 2021 with a redesign expected to turn the 13in model into a 14in MacBook Pro. 
There are many more new features coming to the range
, including a more powerful version of Apple's M1 chip (which arrived in the entry-level models in 2020) and new screen technology%   
*/