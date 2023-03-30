// 더하기 사이클

#include <stdio.h>

int main()
{
    int a, count = 0;
    scanf("%d", &a);
    int newa = a;
    while(1)
    {
        a = (a/10+a%10)%10+a%10*10, count++;
        if(a == newa)
        {
            printf("%d\n", count);
            break;
        }
    }

    return 0;
}