// 알파벳 찾기
#include <stdio.h>
#include <string.h>

int main()
{
    char S[100]; // 단어를 저장할 문자열
    int arr[26]; // 알파벳 위치 배열
    scanf("%s", &S); // 단어 입력받기
    for(int i = 0; i < 26; i++)
    {
        arr[i] = -1; // -1 다 집어넣기
    }
    for(int i = 97; i <= 122; i++)
    {
        for(int j = 0; j < strlen(S); j++)
        {
            if(S[j] == i) // 문자열 문자가 i번째일때 
            {
                arr[S[j]-'a'] = j; // a는 97, 97만큼 뺀 값번째 배열에 j 할당;
                break;
            }
        }
    }
    for(int i = 0; i < 26; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}