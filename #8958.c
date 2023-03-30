// OX퀴즈
#include <stdio.h>
#include <string.h>

int main()
{
    int n; // 테스트 케이스
    scanf("%d", &n);
    int combo, res; 
    char arr[80]=""; // ox 저장할 문자열 
    for(int i=0; i<n; i++)
    {
        combo = 1; // 추가 점수
        res = 0; // 총점
        scanf("%s", arr);
        for(int j=0; j<strlen(arr); j++)
        {
            if(arr[j] == 'O') // O일 경우
            {
                res += combo; // 총점에 점수 부여
                combo++; // 점수 +1
            }
            if(arr[j] == 'X') combo = 1; // X일 경우 점수 초기화
        }
        printf("%d\n", res); // 총점 출력
    }

    return 0;
}