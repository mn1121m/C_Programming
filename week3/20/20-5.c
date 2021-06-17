/*
practice 20 - 5

5. 파일 file1의 내용을 읽고 파일에 나오는 모든 숫자 문자를 file2에 쓰고 숫자의 합을 화면에 출력하는 프로그램을 작성하시오. (2점)

프로그램 설명
∙사용자로부터 file1과 file2에 해당되는 파일명을 입력받는다.
∙file1에 존재하는 모든 숫자를 순서대로 file2에 쓰고, 합계를 화면에 출력한다.

cf) 20-4.c 에서 이미 'file1.txt' 을 쓰고 있기 때문에 file-1.txt, file-2.txt로 정정하여 쓰겠습니다.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1

int sumOfNum(char *str);

int main(void)
{
    FILE *fp1, *fp2;
    char fname1[] = "file-1.txt", fname2[] = "file-2.txt";
    int sum = 0, i = 0; //   sum : file1에 존재하는 모든 숫자들의 합계
    int res;

    //file-1.txt
    if((fp1 = fopen(fname1, "r")) == NULL) {
        fprintf(stderr, "Insufficient memory.\n");
        exit(EXIT_FAILURE);
    }

    while(TRUE) {
        res = fscanf(fp1, "%c", &fname1[i]);
        if(res == EOF)
            break;
        for(i = 0; i < strlen(fname1); i++) {
            if(fname1[i] >= '0' && fname1[i] <= '9') {
                fprintf(fp2, "%d", fname1[i]);
            }
        }
    }
    //file-2.txt 
    if((fp2 = fopen(fname2, "w")) == NULL) {
        fprintf(stderr, "Insufficient memory.\n");
        exit(EXIT_FAILURE);
    }

    sum = sumOfNum(fname1);
    printf("file-1.txt안에 들어있는 각각의 숫자들의 합 = %d\n", sum);

    fclose(fp1);
    fclose(fp2);
    return 0;
}
int sumOfNum(char *str)
{
    int sum = 0;
    int i;

    for(i = 0; i < strlen(str); i++) {
        if(str[i] >= '0' && str[i] <= '9') {
            sum += str[i] - '0';
            printf("[DEBUG] : sum = %d\n", sum);
            printf("fname1[%d] = %d\n", i, str[i]);
        }
    }
    return sum;
}