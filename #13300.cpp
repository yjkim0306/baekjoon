// 방 배정
#include <iostream>
using namespace std;

int arr[2][7];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k, s, y, ans = 0;
    cin >> n >> k;

    for(int i = 0; i < n; i++)
    {
        cin >> s >> y;
        arr[s][y]++;
    }

    for(int i = 0; i < 2; i++)
    {
        for(int j = 1; j <= 6; j++)
        {
            if(arr[i][j] % k == 0)
                ans += arr[i][j] / k;
            else
                ans += arr[i][j] / k + 1;
        }
    }

    cout << ans << "\n";
    
    return 0;
}