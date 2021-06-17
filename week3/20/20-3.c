/* 
practice 20 - 3

3. 학생들의 교과목 성적이 저장되어 있는 텍스트 파일을 구조체 student에 읽어서 성적의 평균을 구하여 출력하는 프로그램을 작성하시오. (2점)
프로그램 설명
∙사용자로부터 입력 파일의 이름을 입력받아야 한다.
∙입력파일에 저장된 학생의 수는 정해져있지 않다.
∙출력 파일 이름은 out.txt로 한다.
∙평균은 소수점 2자리까지 출력해야 한다.
∙입력파일의 끝에는 개행문자(‘\n‘)가 없으며 출력파일에 출력할 때 마지막 줄의 마지막의 끝에는 개행문자(‘\n‘)를 포함한다.
∙예를 들어 입력 파일과 프로그램 수행 후 출력 내용은 다음과 같다

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_SIZE 128
#define MAX_STUDENT_SIZE 128
#define TRUE 1


typedef struct _student {
    char name[MAX_NAME_SIZE];
    int kor, mat, eng, sum;
    double avg;
} student;

int main(void)
{
    FILE *rfp = fopen("student.txt","r"), *wfp = fopen("out.txt","w");
    int i, j, res;
    student stu[MAX_STUDENT_SIZE];

    if(rfp == NULL || wfp == NULL) 
        return 1;
    
    while(TRUE) {
        i = 0;  // 학생 수 
        res = fscanf(rfp, "%s%d%d%d", stu[i].name, &stu[i].kor, &stu[i].mat, &stu[i].eng);
        if( res == EOF ) 
            break;

        //파일의 데이터를 받아서 배열에 저장
        stu[i].sum = stu[i].kor + stu[i].mat + stu[i].eng;
        stu[i].avg = stu[i].sum / 3.0;
        fprintf(wfp, "%s\t%d\t%d\t%d\t%.2lf\n", stu[i].name, stu[i].kor, stu[i].mat, stu[i].eng, stu[i].avg);
        i++;
    }

    fclose(rfp);
    fclose(wfp);
    return 0;
}

/*
out.txt
=>
윤미상	90	85	75	83.33
박재상	75	68	99	80.67
윤건	85	85	60	76.67
울라라	80	70	95	81.67
버스커	75	90	88	84.33
*/