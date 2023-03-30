// 한수
#include <stdio.h>

int main()
{
    int N, res = 0;
    scanf("%d", &N);

    for(int i = 1; i <= N; i++)
    {

        if(i < 100) res += 1;
        if(i >= 100)
        {
            int a = i / 100;
            int b = (i % 100) / 10;
            int c = i % 10;
            if((a-b) == (b-c)) res += 1;
        }
    }
    printf("%d\n", res);
    return 0;
}