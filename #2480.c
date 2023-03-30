// 주사위 세개
#include <stdio.h>

int max(int a, int b, int c)
{
    if (a > b && a > c) return a;
    else if (b > a && b > c) return b;
    else if (c > a && c > b) return c;
    return 0;
}

int ident_dice(int a, int b, int c)
{
    if(a == b) return a;
    else if(a == c) return c;
    else if(b == c) return b;
    return 0;
}

int main()
{
    int dice1, dice2, dice3;
    int res;
    scanf("%d %d %d", &dice1, &dice2, &dice3);
    if(dice1 == dice2 && dice2 == dice3) res = 10000+dice1*1000;
    else if((dice1 == dice2 && dice2 != dice3)||(dice1 == dice3 && dice3 != dice2)||(dice2 == dice3 && dice3 !=dice1)) res = 1000+ident_dice(dice1, dice2, dice3)*100;
    else res =  max(dice1, dice2, dice3) * 100;
    printf("%d\n", res);
    return 0;
}