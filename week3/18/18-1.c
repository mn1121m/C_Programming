/*
구조체
practice 18 - 1

소요: 0.5H
*/
#include <stdio.h>
#include <string.h>

#define MAX_NAME_SIZE 128

typedef struct {
    char title[MAX_NAME_SIZE];
    char name[MAX_NAME_SIZE];
    int year;
    int runTime;
} MovieData;

int main(void)
{
    MovieData mb;

    fgets(mb.title, sizeof(mb.title), stdin); //공백포함하면서 한번에 입력받아야 하기 때문에 fgets() 사용하였습니다
    mb.title[strlen(mb.title) - 1] = '\0';  //마지막 \n - > \0 으로 바꿔야하므로 바꿔줍니다.
    fgets(mb.name, sizeof(mb.name), stdin);
    mb.name[strlen(mb.name) - 1] = '\0';
    scanf("%d", &mb.year);
    scanf("%d", &mb.runTime);

    printf("Title : %s\n", mb.title);
    printf("Director : %s\n", mb.name);
    printf("Year : %d\n", mb.year);
    printf("RunningTime : %d\n", mb.runTime);

    return 0;
}
/*
The war of the worlds
Byron Haskin
1953
88
Title : The war of the worlds
Director : Byron Haskin
Year : 1953
RunningTime : 88
*/