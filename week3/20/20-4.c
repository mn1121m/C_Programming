/*
practice 20 - 4
4. 학생들의 성적이 정수형으로 저장된 텍스트 파일을 읽어서 90점 이상의 개수와 해당 점수들을 화면에 출력하는 프로그램을 작성하시오. (2점)

프로그램 설명
∙사용자로부터 입력 파일의 이름을 받는다.
∙입력 파일에 저장된 정수의 개수는 정해져있지 않다.
∙출력은 파일이 아닌 화면으로 출력한다.

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_ARY_SIZE 128
#define TRUE 1

int main(void)
{
    FILE *fp; 
    char fname[] = "file1.txt";
    int buf[MAX_ARY_SIZE] = {0, };
    int out[MAX_ARY_SIZE] = {0, };
    int count = 0, res, i, j;

    if((fp = fopen(fname, "r")) == NULL) {
        fprintf(stderr, "Insufficient memory.\n");
        exit(EXIT_FAILURE);
    }  
    
    i = 0;  //while문 밖에서 초기화 선언해줘야 한다.
    while(TRUE) {  
        res = fscanf(fp, "%d", &buf[i]);
        if(res == EOF)
            break;
        if(buf[i] >= 90) {
            out[i] = buf[i];
            count++;
            printf("---------[DEBUG] : ------------\n");
            printf("out[%d] = %d, buf[%d] = %d\n",i, out[i], i, buf[i]);
            printf("count = %d\n", count);
            
        }
        i++;
    }
    printf("90점 이상의 개수와 해당 점수 출력\n");
    printf("%d\n", count);
    for(j = 0; j < i; j++) {
        if(out[j] >= 90)
            printf("out[%d] = %d\n", j, out[j]);
    }
    fclose(fp);
    return 0;   
}
/*
90점 이상의 개수와 해당 점수 출력
4
out[0] = 91
out[1] = 90
out[3] = 94
out[5] = 93
*/