/* 
practice 20 - 1 -> ok

1. 텍스트 파일 이름을 입력받아 해당 파일의 내용을 읽어서 그 내용을 표준출력으로 출력하는 프로그램을 작성하시오. (2점)

프로그램 설명
∙파일의 이름을 입력받고 해당 파일을 읽기 모드로 연다.
∙반복문을 사용하여 텍스트 파일을 읽어 화면에 출력한다.
∙파일 입출력이 종료된 후에는 반드시 파일을 닫는다.

- 질문 - 
+ 20-1 , 20-1_1 한 코드말고 다른 답안이 있을까요 ?


cf) fgets(텍스트를 저장할 메모리의 주소, 메모리의 최대크기, 파일 포인터)
*/
#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 256

int main(int argc, char **argv)
{
    FILE *fp;
    char buf[MAX_LENGTH];
    int i;

    scanf("%s", buf);

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
data.txt
Apple announced the switch to Intel chips seven years ago because they ran faster and generated less heat than the products built by Motorola Inc. and International Business Machines Corp. that Apple had used. %

test.txt
The Mac maker has in the past few years acquired chip companies, added engineers and created designs based on technology from ARM Holdings Plc (ARM) for its best-selling iPhone and iPad. % 
*/