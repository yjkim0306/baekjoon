// 슈퍼 마리오
#include <iostream>
#include <cmath>
using namespace std;

int arr[10], sum[10];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int ans = 0;
    for(int i = 0; i < 10; i++)
        cin >> arr[i];

    sum[0] = arr[0];
    for(int i = 1; i < 10; i++)
        sum[i] = sum[i - 1] + arr[i];
    
    ans = sum[0];
    for(int i = 1; i < 10; i++)
    {
        if(abs(ans - 100) >= abs(sum[i] - 100))
            ans = sum[i];
    }

    cout << ans << "\n";

    return 0;
}