// 합
#include <stdio.h>

int main()
{
    int n; 
    int sum = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        sum = sum + 1+ i; 
    }
    printf("%d\n", sum);

    return 0;
}