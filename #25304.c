// 영수증
#include <stdio.h>

int main()
{
    int X;
    int N;
    int a, b;
    scanf("%d", &X);
    scanf("%d", &N);

    for(int i = 0; i < N; i++)
    {
        scanf("%d %d", &a, &b);
        X = X - a * b;
    }
    if(X == 0) printf("Yes");
    else printf("No");

    return 0;
}