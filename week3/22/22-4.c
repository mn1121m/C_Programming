/*
practice 22 - 4
4. 동적 구조체 배열을 사용해서 데이터를 입력받고 출력하는 프로그램을 작성하시오. (2점)

소요: 20M
*/
#include <stdio.h>
#include <stdlib.h>

#define MAX 128

typedef struct _student {
    int no;
    char name[20];
    double midterm;
    double final;
    double quiz;
    double total;
} Student;

int main(void)
{
    Student *ary;
    int num_student = 0, i;

    scanf("%d", &num_student);
    ary = (Student*)malloc(sizeof(Student) * num_student);

    for(i = 0; i < num_student; i++) {
        scanf("%s %lf %lf %lf", ary[i].name, &(ary[i].midterm), &(ary[i].final), &(ary[i].quiz));
        ary[i].total = ary[i].midterm + ary[i].final + ary[i].quiz;
    }
    
    printf("\n");
    for(i = 0; i < num_student; i++) {
        printf("%d %s %.1lf %.1lf %.1lf %.1lf\n", i+1, ary[i].name, ary[i].midterm, ary[i].final, ary[i].quiz, ary[i].total);
    }

    free(ary);
    return 0;
}
/*
4
jun 90.5 85.5 20.3
Boram 81.0 80.5 28.5
Hyun 93.2 85.5 25.5
Seul 90.5 90.5 29.5

1 jun 90.5 85.5 20.3 196.3
2 Boram 81.0 80.5 28.5 190.0
3 Hyun 93.2 85.5 25.5 204.2
4 Seul 90.5 90.5 29.5 210.5
*/