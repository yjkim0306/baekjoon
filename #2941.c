// 크로아티아 알파벳
#include <stdio.h>
#include <string.h>

int main(){
    char word[101];
    scanf("%s", word);
    int len = strlen(word);
    int count = 0;
    for(int i = 0; i < len; i++){
        if(word[i] == 'c' && word[i+1] == '=') count++;
        if(word[i] == 'c' && word[i+1] == '-') count++;
        if(word[i] == 'd' && word[i+1] == 'z' && word[i+2] == '=') count++;
        if(word[i] == 'd' && word[i+1] == '-') count++;
        if(word[i] == 'l' && word[i+1] == 'j') count++;
        if(word[i] == 'n' && word[i+1] == 'j') count++;
        if(word[i] == 's' && word[i+1] == '=') count++;
        if(word[i] == 'z' && word[i+1] == '=') count++;
    }
    printf("%d\n", len-count);

    return 0;
}