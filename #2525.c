// 오븐 시계
#include <stdio.h>

int main()
{
    int h, m, t;
    scanf("%d %d\n %d", &h, &m, &t);
    h+=(m + t)/60;
    m=(m+t)%60;
    h%=24;
    printf("%d %d\n", h, m);
    return 0;

}