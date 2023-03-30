// 단어의 개수
#include <stdio.h>
#include <string.h>

int main()
{
    int cnt = 0;
    char str[1000001];
    scanf("%[^\n]s", str);

    if(str[0] != ' ') cnt++;

    for(int i = 1; i < strlen(str); i++)
    {
        if(str[i-1] == ' ' && str[i] != ' ') cnt ++;
    }
    printf("%d\n", cnt);

    return 0;
}