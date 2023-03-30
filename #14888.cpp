// 연산자 끼워넣기
#include <iostream>
#include <algorithm>
using namespace std;

int n;
int maxi = -1000000000, mini = 1000000000;
int arr[12];
int oper[4] = {0,};

void solve(int res, int idx)
{
    if(idx == n)
    {
        maxi = max(res, maxi);
        mini = min(res, mini);
        return;
    }

    for(int i = 0; i < 4; i++)
    {
        if(oper[i] > 0)
        {
            oper[i]--;
            if(i == 0) solve(res + arr[idx], idx + 1);
            else if(i == 1) solve(res - arr[idx], idx + 1);
            else if(i == 2) solve(res * arr[idx], idx + 1);
            else solve(res / arr[idx], idx + 1);
            oper[i]++;
        }
    }

    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < 4; i++) cin >> oper[i];

    solve(arr[0], 1);

    cout << maxi << "\n";
    cout << mini << "\n";
    
    return 0;
}