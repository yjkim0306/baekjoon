// 손익분기점
#include <stdio.h>

int main()
{
    int A, B, C; //고정 비용, 가변 비용, 가격
    scanf("%d %d %d", &A, &B, &C);
    if(B>=C) printf("-1\n");
    else printf("%d\n", A/(C-B)+1);

    return 0;
}