// 지능형 기차
#include <iostream>
#include <algorithm>
using namespace std;
int arr[2][4];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 2; j++)
            cin >> arr[i][j];
    }
    int res = 0, cnt = 0;
    for(int i = 0; i < 4; i++)
    {
        cnt -= arr[i][0];
        cnt += arr[i][1];
        res = max(res, cnt);
    }

    cout << res << "\n";

    return 0;
}