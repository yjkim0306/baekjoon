// 평균은 넘겠지
#include <stdio.h>

int main()
{
    int C; // 테스트 케이스
    scanf("%d", &C);
    int N = 0; // 학생 수
    for(int i = 0; i < C; i++)
    {
        int arr[1001], sum = 0; // N명의 점수, 점수의 합
        double avg = 0.00; // 평균을 저장할 변수
        scanf("%d", &N);
        for(int j = 0; j < N; j++)
        {
            scanf("%d", &arr[j]);
            sum += arr[j];
        }
        avg = (double)sum / N;
        int count = 0; // 평균을 넘긴 학생 수
        for(int j = 0; j < N; j++)
        {
            if(arr[j] > avg) count++;
        }
        printf("%.3lf%%\n", (double)count/N*100);
    }

    return 0;
}