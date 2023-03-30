// 최소, 최대
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int MAX = arr[0];
    int min = arr[0];
    for(int i=0; i<N; i++)
    {
        if(arr[i] < min) min = arr[i];
        if(arr[i] > MAX) MAX = arr[i];
    }

    printf("%d %d", min, MAX);

    return 0;
}