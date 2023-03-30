// 윤년
#include <stdio.h>

int main()
{
    int lyear;
    scanf("%d", &lyear);
    if(lyear%4==0 && lyear%100 !=0 || lyear%400==0) printf("1");
    else printf("0");

    return 0;
}