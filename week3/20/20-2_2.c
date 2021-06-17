/* 
practice 20 - 2
2. 텍스트 파일 이름을 입력받아 해당 파일의 내용을 읽어서 모두 대문자로 바꾸어서 파일과 표준출력으로 출력하는 프로그램을 작성하시오. (2점)

프로그램 설명
∙입력 파일명과 출력 파일명은 사용자로부터 입력받아야 한다. 첫 번째 문자열은 입력받을 파일의 이름이고 두 번째 문자열은 대문자로 바꾼 내용을 출력할 파일의 이름이다.

cf)
- 'r+':    처음에 읽기 모드로 파일을 열어 쓰기 모드로 전환 가능
- fseek(FILE * File, long _Offst, int _Origin);
    (이동할 파일의 포인터, 기준점으로부터 떨어진 값, 성공하면 0, 오프셋을 계산하는 기준점)
    - 오프셋 기준 종류  - SEEK_SET  값: 0 - 파일의 시작위치
                    - SEEK_CUR  값: 1 - 파일의 현재위치
                    - SEEK_END  값: 2 - 파일의 끝 위치
- fputs(onst char* str, FILE* pFile);

    첫번째 인자 : 파일에 쓸 문자열
    두번째 인자 : 파일의 파일 포인터

*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_LENGTH_SIZE 256

int main(void)
{
    FILE *fp;
    char a[MAX_LENGTH_SIZE];
    int i;

    
    if((fp = fopen("data.txt", "r+")) == NULL) {
        printf("Cannot open the file.\n");
        exit(EXIT_FAILURE);
    }

    fgets(a, MAX_LENGTH_SIZE, fp);
    printf("입력 파일 : ");
    for(i = 0; a[i] != '\0'; i++) {
        printf("%c", a[i]);
    }
    printf("\n");

    //소문자 -> 대문자
    fseek(fp, 0, SEEK_SET);     //파일 위치를 파일의 처음위치로 이동
    for(i = 9; a[i] != '\0'; i++) {
        a[i] = toupper(a[i]);   //소문자 -> 대문자 변환
    }
    fputs(a, fp);

    fseek(fp, 0, SEEK_SET);
    fgets(a, MAX_LENGTH_SIZE, fp);
    printf("출력 파일 : ");
    for(i = 0; a[i] != '\0'; i++) {
        printf("%c", a[i]);
    }
    printf("\n");
    return 0;
}