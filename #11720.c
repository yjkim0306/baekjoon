// 숫자의 합
#include <stdio.h>

int main()
{
    int N, sum = 0;
    scanf("%d", &N);
    char arr[N];
    scanf("%s", arr);
    for(int i=0; i<N; i++)
    {
        sum += arr[i] - '0';
    }
    printf("%d", sum);

    return 0;
}