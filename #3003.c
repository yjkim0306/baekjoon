// 킹, 퀸, 룩, 비숍, 나이트, 폰
#include <stdio.h>

int main()
{
    int king, queen, rook, bishop, knight, pawn;
    scanf("%d %d %d %d %d %d", &king, &queen, &rook, &bishop, &knight, &pawn);
    printf("%d %d %d %d %d %d\n", 1-king, 1-queen, 2-rook, 2-bishop, 2-knight, 8-pawn);

    return 0;
}