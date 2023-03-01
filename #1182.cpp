// 부분수열의 합
#include <iostream>
using namespace std;

int arr[21];
int n, s, cnt = 0;

void recursion(int idx, int sum)
{
    if(idx == n) return;
    if(sum + arr[idx] == s) cnt++;
    
    recursion(idx + 1, sum);
    recursion(idx + 1, sum + arr[idx]);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> s;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    recursion(0, 0);

    cout << cnt << "\n";

    return 0;
}