// 알람 시계
#include <stdio.h>

int main()
{
    int h, m;
    scanf("%d %d", &h, &m);
    if(h==0 && m<45) h=23, m=m+60;
    if(m>=45) h=h+1;
    if(m<45) m=m+60;
    printf("%d %d", h-1, m-45);

    return 0;
}