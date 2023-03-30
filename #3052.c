// 나머지
#include <stdio.h>

int main()
{
    int arr[10];
    int res = 0;
    int a;
    for(int i=0; i<10; i++)
    {
        scanf("%d", &a);
        arr[i] = a%42;
    }

    for(int i=0; i<10; i++)
    {
        int count = 0;
        for(int j = i+1; j<10; j++)
        {
            if(arr[i]==arr[j]) count++;
        }
        if(count==0) res++;
    }
    printf("%d\n", res);

    return 0;
}