// 최댓값
#include <stdio.h>

int main()
{
    int arr[9];
    int max = arr[0];
    int count;
    for(int i=0; i<9; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] > max) max = arr[i];
    }
    for(int i=0; i<9; i++)
    {
        if(max==arr[i]) count = i+1;
    }
    printf("%d\n%d\n", max, count);
}