/*
구조체
practice 18 - 2

소요: 2H
- 질문 - 
+ 입력에 대한 구현이 이렇게 하는 건지 궁금합니다.
+ 좀더 깔끔하거나 수정해야할게 있으면 말씀해주시면 감사하겠습니다!
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
    Employee employee[MAX_ARY_SIZE] = {0 ,};
    int i;
    double annualIncome[MAX_ARY_SIZE];
    
    //input
    printf("[DEBUG]; \n");
    for(i = 0; i < 3; i ++) {
        printf("1\n");
        scanf("%d", &employee[i].id);   //scanf() : enter까지 한꺼번에 키보드 버퍼에 들어갑니다. 
        getchar();                      //버퍼에 찌꺼기처럼 남아있는 enter를 소비시켜 버리기 위해 공백을 만들어준다.
        
        printf("2\n");
        fgets(employee[i].name, sizeof(employee[i].name), stdin);
        employee[i].name[strlen(employee[i].name) - 1] = '\0';
        
        printf("3\n");
        fgets(employee[i].address, sizeof(employee[i].address), stdin);
        employee[i].address[strlen(employee[i].address) - 1] = '\0';
        // scanf("%[^\n]s", employee[i].name);
        // scanf("%[^\n]s", employee[i].address);
        
        printf("4\n");
        scanf("%d", &employee[i].salary);
        getchar();
        
        printf("5\n");
        scanf("%lf", &employee[i].incentive);
        getchar();

        annualIncome[i] = employee[i].salary * (12 + employee[i].incentive);
    }

    //output
    for(i = 0; i < 3; i ++) {
        printf("%d\t%s\t%s\t%d %.0lf%%\t%.1lf\n"
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
/*
20211   김지혜  서울시 구로구 고척동    1200000 120%    15840000.0
20212   김자경  경기도 안양시 비산동    1500000 150%    20250000.0
20213   강동구  인천광역시 간석동       1800000 180%    24840000.0
*/