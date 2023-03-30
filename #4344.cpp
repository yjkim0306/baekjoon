// 평균은 넘겠지
#include <iostream>
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
        int arr[1001] = {0,}; // n명의 점수
        int sum = 0; // 점수의 합
        double avg = 0.00; // 평균을 저장할 변수

        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        avg = (double)sum / n;

        int cnt = 0;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] > avg) cnt++;
        }

        cout.precision(3);
        cout << (double)cnt / n * 100 << "\n";
    }

    return 0;
}