// 다이얼
#include <stdio.h>
#include <string.h>

int main()
{
    int t=0;
    char dial[16];
    scanf("%s", dial);
    for(int i = 0; i < strlen(dial); i++)
    {
        if(dial[i] == 'A' || dial[i] == 'B' || dial[i] == 'C') t += 3;
        if(dial[i] == 'D' || dial[i] == 'E' || dial[i] == 'F') t += 4;
        if(dial[i] == 'G' || dial[i] == 'H' || dial[i] == 'I') t += 5;
        if(dial[i] == 'J' || dial[i] == 'K' || dial[i] == 'L') t += 6;
        if(dial[i] == 'M' || dial[i] == 'N'|| dial[i] == 'O') t += 7;
        if(dial[i] == 'P' || dial[i] == 'Q' || dial[i] == 'R'|| dial[i] == 'S') t += 8;
        if(dial[i] == 'T' || dial[i] == 'U' || dial[i] == 'V') t += 9;
        if(dial[i] == 'W' || dial[i] == 'X' || dial[i] == 'Y' || dial[i] == 'Z') t += 10;
    }
    printf("%d\n",t);

    return 0;
}