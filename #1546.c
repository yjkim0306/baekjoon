// 평균
#include <stdio.h>

int main()
{
    int n; //시험 본 과목 개수
    scanf("%d", &n);
    double arr[n]; //현재 성적
    double mnp[n]; //새로운 성적
    double avg; //평균
    int max = arr[0];
    for(int i = 0; i < n; i++)
    {
        scanf("%lf", &arr[i]); //현재 성적 입력받기  
    }
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > max) max = arr[i]; //두 수 비교해가며 최댓값 설정  
    }

    for(int i = 0; i < n; i++)
    {
        mnp[i] = (arr[i]/max)*100;
    }
    for(int i = 0; i < n; i++)
    {
        avg = avg + mnp[i];
    }
    printf("%lf\n", avg/n);

    return 0;

}