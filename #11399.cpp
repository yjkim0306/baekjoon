// ATM
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n; // 사람의 수
    cin >> n;
    int time[1001]; // 각 사람이 돈을 인출하는데 걸리는 시간을 저장할 배열
    int res = 0; // 결과값
    for(int i = 0; i < n; i++)
    {
        cin >> time[i];
    }
    sort(time, time + n); // 배열 오름차순 정렬
    for(int i = 0; i < n; i++)
    {
        res = res + time[i]*(n-i);
    }
    cout << res << "\n";

    return 0;
}