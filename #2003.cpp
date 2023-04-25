// 수들의 합 2
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m, res = 0, cnt = 0;
    cin >> n >> m;

    int arr[n + 1];
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            res += arr[j];
            if(res == m)
            {
                cnt++;
                res = 0;
                break;
            }
        }
        if(res != 0) res = 0;
    }

    cout << cnt << "\n";

    return 0;
}