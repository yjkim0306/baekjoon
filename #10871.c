// X보다 작은 수

#include <stdio.h>

int main()
{
    int N, X, a;
    scanf("%d %d", &N, &X);
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &a);
        if(a < X) printf("%d ", a);
    }
    
    return 0;
}