// 동전 0
#include <iostream>
using namespace std;
int arr[11]; // 동전의 가치
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n, k; // 동전의 종류, 가치의 합
    int res = 0; // 필요한 동전 개수의 최솟값
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = n-1; i >= 0; i--)
    {
        res += k/arr[i];
        k = k % arr[i];
    }
    cout << res << "\n";

    return 0;
}