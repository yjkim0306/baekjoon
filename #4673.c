// 셀프 넘버
#include <stdio.h>

int d(int n)
{
    int selfnum = n; // 양의 정수 n을 selfnum에 대입
    while (n>0)
    {
        selfnum += n%10; // 하위 자리 수 더하기
        n /= 10; // 상위 자리 수 n에 대입
    }
    return selfnum; // 셀프 넘버값 리턴
}

int main()
{
    int arr[10001] = {0}; // 셀프 넘버일 경우 1, 아닐 경우 0이 저장되어 있는 배열
    int flag = 0; // 10000 이하일 때까지 판별
    for(int i=0; i<10001; i++)
    {
        flag = d(i);
        if(flag < 10001) arr[flag] = 1; // 셀프 넘버일 경우 1 저장
    }
    for(int j=0; j<10001; j++)
    {
        if(arr[j] != 1) printf("%d\n", j); // 저장된 값이 1이 아니면 셀프 넘버가 아니므로 출력
    }

    return 0;
}
