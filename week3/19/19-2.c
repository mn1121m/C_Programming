/*
practice 19 - 2
2. 구조체 배열을 사용하여 주소록을 만들려고 한다. 
quit이 입력될 때까지 이름, 전화번호를 입력받아 주소록을 생성한 다음, 
사용자로부터 검색할 사람의 이름을 입력받아 이름에 해당하는 전화번호를 출력하는 프로그램을 작성하라.

소요: 1H
*/
#include <stdio.h>
#include <string.h>

#define MAX_NAME_SIZE 128
#define MAX_ARY_SIZE 128
#define TRUE 1
#define FALSE 0

//struct with name and phone number
typedef struct {
    char name[MAX_NAME_SIZE];
    char number[MAX_NAME_SIZE];
} Information;

int main(void)
{
    //info : 구조체 변수이름 , i : 저장할 배열위치(index)
    //count : 저장할 크기, flag : 존재하는지 여부 확인, searchNum: 찾는 이름의 배열위치(index)
    //searchName : 찾는 이름
    Information info[MAX_ARY_SIZE];
    int i = 0, count = 0, flag = FALSE, searchNum = 0;
    char searchName[MAX_NAME_SIZE];
    
    //input
    printf("Enter your name and phone number. (End of loop when quit is input)\n");
    while(TRUE) {
        printf("name : ");
        scanf("%s", info[i].name);
        if(strcmp(info[i].name, "quit") == '\0')
            break;
        getchar();

        printf("phone number : ");
        scanf("%s", info[i].number);
        getchar();
        i++;
        count++;
    }
    printf("\n");

    //input search name
    printf("looking for name : ");
    scanf("%s", searchName);
    getchar();

    //check if name exist
    for(i = 0; i < count; i ++) {
        //If the name is in the address book
        if(strcmp(info[i].name, searchName) == '\0') {
            flag = TRUE;
            break;
        }
        searchNum++;
    }
    //print - If there is a name,or if not
    if(flag) {
        printf("%s : %s\n", searchName, info[searchNum].number);
    } else
        printf("cannot find\n");
    return 0;
}
/*
1)
name : Timmy
phone number : 010-3204-2301
name : Amy
phone number : 010-2321-6754
name : Jimmy
phone number : 010-5643-0011
name : quit

looking for name : Amy
Amy : 010-2321-6754
==================================
2)
name : Hazel
phone number : 010-5533-4343
name : Brown 
phone number : 010-5858-6614
name : Ivory
phone number : 010-2336-6647
name : quit

looking for name : Timmy
cannot find
*/