/*
구조체
practice 18 - 2

소요: 1.5H
- 질문 - 
+ 이름, 주소 관해서 띄어쓰기 포함해서 입력하는 방법에 대해서 결국 못찾았습니다.
+ 솔직히 따로 입력받는 구현은 할 수 있는데, 한번에 입력받고 구현하는 것을 모르겠습니다.
*/
#include <stdio.h>
#include <string.h>

#define MAX_NAME_SIZE 128
#define MAX_ARY_SIZE 128

typedef struct {
    int id;
    char name[MAX_NAME_SIZE];
    char address[MAX_NAME_SIZE];
    int salary;
    double incentive;
} Employee;

int main(void)
{
    Employee employee[MAX_ARY_SIZE] = {0 ,}
    int i;
    double annualIncome[MAX_ARY_SIZE];
    
    //input
    for(i = 0; i < 3; i ++) {
        scanf("%d", &employee[i].id);
        fgets(employee[i].name, sizeof(employee[i].name), stdin);
        employee[i].name[strlen(employee[i].name) - 1] = '\0';
        fgets(employee[i].address, sizeof(employee[i].address), stdin);
        employee[i].address[strlen(employee[i].address) - 1] = '\0';
        // scanf("%[^\n]s", employee[i].name);
        // scanf("%[^\n]s", employee[i].address);
        scanf("%d", &employee[i].salary);
        scanf("%lf", &employee[i].incentive);

        annualIncome[i] = employee[i].salary * (12 + employee[i].incentive);
    }

    //output
    for(i = 0; i < 3; i ++) {
        printf("%d\t%s\t%s\t%d\t%%%lf\t%.1lf\n"
        , employee[i].id
        , employee[i].name
        , employee[i].address
        , employee[i].salary
        , employee[i].incentive * 100
        , annualIncome[i]
        );
    }

    return 0;
}