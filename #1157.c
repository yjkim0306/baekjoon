// 단어 공부
#include <stdio.h>
#include <string.h>

int main()
{
    int max, res = 0, len;
    int ans = 0;
    char str[1000001]; //문자열
    int arr[26]={0,}; //각 알파벳 수 저장할 배열
    scanf("%s", str); 
    len = strlen(str);
    
    for(int i = 'a'; i <= 'z'; i++)
    {
        for(int j = 0; j < len; j++)
        {
            if(i==str[j]) arr[i-'a']++;
        }
    }
    for(int i = 'A'; i <= 'Z'; i++)
    {
        for(int j = 0; j < len; j++)
        {
            if(i==str[j]) arr[i-'A']++;
        }  
    }
    
    max = arr[0];
    for(int i = 1; i < 26; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
            ans = i;
        }
    }
    
    for(int i = 0; i < 26; i++)
    {
        if(max == arr[i]) res++;
    }

    if(res > 1) printf("?\n");
    else printf("%c", ans + 'A');

    return 0;
}