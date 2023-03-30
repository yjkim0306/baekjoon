// 덩치
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int N; // 전체 사람의 수
    cin >> N;
    int res[50]; // 덩치 등수를 저장할 배열
    int arr[50][2] = {0,}; // 몸무게와 키를 저장할 배열
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
        res[i] = 1;
    }
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1]) res[i]++;
        }
    }

    for(int i = 0; i < N; i++)
    {
        cout << res[i] << " ";
    }
    cout << "\n";
    return 0;
}