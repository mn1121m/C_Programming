/* 
practice 20 - 2 다시()
2. 텍스트 파일 이름을 입력받아 해당 파일의 내용을 읽어서 모두 대문자로 바꾸어서 파일과 표준출력으로 출력하는 프로그램을 작성하시오. (2점)

프로그램 설명
∙입력 파일명과 출력 파일명은 사용자로부터 입력받아야 한다. 첫 번째 문자열은 입력받을 파일의 이름이고 두 번째 문자열은 대문자로 바꾼 내용을 출력할 파일의 이름이다.

cf)
-   fputc(int c, FILE * pFile)
    -첫번째인자 : 넣을 문자 혹은 숫자. 아스키코드에 맞게 들어갑니다. 그렇기 때문에 int로 받는 것입니다.
    -두번째인자 : 다룰 파일의 파일 포인터를 받습니다. fopen에서 반환받는 것입니다.

- 질문 - 
+  우선 20-2, 20-2_2 같은 문제를 두개로 다른 코드로 구현하여 풀이했습니다.
    하지만, 문제의도에 대한 구현방법이 떠오르질 않아서 다르게 구현하여 풀었습니다.
    표출출력하는 방법에 대해서 설명좀 부탁드리고, 코딩좀 수정좀 부탁드리겠습니다.

*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_LENGTH_SIZE 256
#define TRUE 1

int main(void)
{
    FILE *fp1, *fp2;
    char a[MAX_LENGTH_SIZE], b[MAX_LENGTH_SIZE];
    int i;
    char c;

    printf("첫번째 파일이름 : ");
    scanf("%s", a);
    printf("두번째 파일이름 : ");
    scanf("%s", b);

    if((fp1 = fopen(a, "r")) == NULL) {
        fprintf(stderr, "can not open the file\n");
        exit(EXIT_FAILURE);
    }
    if((fp2 = fopen(b, "w")) == NULL) {
        fprintf(stderr, "can not open the file\n");
        exit(EXIT_FAILURE);
    }
    //  소문자 -> 대문자 변환
    while(TRUE) {
        c = fgetc(fp1);
        if(c == EOF)
            break;
        fputc(toupper(c), fp2);
        printf("%c", c);
    }

    // print
    // fgets(a, MAX_LENGTH_SIZE, fp1);
    // printf("data.txt : %s\n", a);
    // fgets(a, MAX_LENGTH_SIZE, fp2);
    // printf("out.txt : %s\n", b);
    // printf("data.txt : %s\n", a);
    // printf("out.txt : %s\n", b);
    
    fclose(fp1);
    fclose(fp2);
    return 0;
}

/*
data.txt
Apple announced the switch to Intel chips seven years ago because they ran faster and generated less heat than the products built by Motorola Inc. and International Business Machines Corp. that Apple had used. %

========================================================================================
out.txt
APPLE ANNOUNCED THE SWITCH TO INTEL CHIPS SEVEN YEARS AGO BECAUSE THEY RAN FASTER AND GENERATED LESS HEAT THAN THE PRODUCTS BUILT BY MOTOROLA INC. AND INTERNATIONAL BUSINESS MACHINES CORP. THAT APPLE HAD USED. %
*/