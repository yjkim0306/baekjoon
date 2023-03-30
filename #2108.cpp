// 통계학
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int N; // 정수의 개수
    int scope; // 범위
    int arr[500001];
    int count[8001];
    cin >> N;
    int maxi = -4000;
    int mini = 4000; 
    int sum = 0; // 정수의 합
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        count[arr[i]+4000]++;
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
    }
    sort(arr, arr + N);
    int flag;
    int cd = 0;
    for(int i = 0; i < 8001; i++)
    {
        if(count[i] > cd)
        {
            cd = count[i];
            flag = i;
        }
    }
    for(int i = flag + 1; i < 8001; i++)
    {
        if(count[i] == cd)
        {
            flag = i;
            break;
        }
    }
    scope = maxi - mini; // 범위 = 최댓값 - 최솟값
    int avg = round((double)sum/N);
    cout << avg << "\n"; // 산술평균
    cout << arr[N/2] << "\n"; // 중앙값
    cout << flag - 4000 << "\n"; // 최빈값
    cout << scope << "\n"; // 범위
}