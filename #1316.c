// 그룹 단어 체커
#include <stdio.h>
#include <string.h>

int main()
{
    int N, count; //단어의 개수, 그룹 단어 개수
    char word[101]; //단어 저장할 문자열
    scanf("%d", &N);
    count = N; //그룹 단어 개수 = 전체 단어의 개수
    for(int i = 0; i < N; i++) //N번 동안
    {
        char init = '0'; 
        int Alphabet[26] = {0, };
        scanf("%s", word); //단어 입력받기
        for(int j = 0; j < strlen(word); j++)
        {
            if(init != word[j]) //문자열의 j번째 문자가 0이 아닐 경우
            {
                init = word[j]; //init에 문자열의 j번째 문자 대입
                Alphabet[word[j]-'a'] += 1; //해당 문자에서 'a'만큼 뺀 값 (알파벳 26개 중 몇)번째 배열 요소를 증가
            }
            
            if(Alphabet[word[j]-'a'] == 2) //2가 되었다는 것은 어떤 문자가 떨어져서 다시 위의 if문에 들어간 것
            {
                count -= 1; //따라서 전체 단어 수에서 1개 차감
                break;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}