// 곱셈
#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int c = (b/10)*10; // 1의 자리수 구하기용
    int d = (b/100)*100; // 10의 자리수 구하기용
    printf("%d\n", a*(b-c));
    printf("%d\n", a*(c-d)/10);
    printf("%d\n", a*d/100);
    printf("%d\n",a*b);

    return 0;
}