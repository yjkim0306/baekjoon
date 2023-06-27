// 평균은 넘겠지
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; // 테스트 케이스
    cin >> t;
    int n; // 학생 수
    
    while(t--)
    {
        double arr[1001] = {0.000,}; // n명의 점수
        double sum = 0.000; // 점수의 합
        double avg = 0.000; // 평균을 저장할 변수

        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        avg = sum / (double)n; 

        int cnt = 0;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] > avg) cnt++;
        }
        
        cout << fixed;
        cout.precision(3);
        cout << round((double)cnt / (double)n * 100 * 1000) / 1000 << "%\n";
    }

    return 0;
}