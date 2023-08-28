// 팰린드롬?
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int arr[2001];
bool palindrome[2001][2001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) 
        cin >> arr[i];

    for(int i = 1; i <= n; i++)
    {
        if(arr[i] == arr[i + 1])
            palindrome[i][i + 1] = true;
    }

    for(int i = 1; i <= n; i++)
        palindrome[i][i] = true;

    for(int i = n - 1; i >= 1; i--)
    {
        for(int j = i + 2; j <= n; j++)
        {
            if(arr[i] == arr[j] && palindrome[i + 1][j - 1])
                palindrome[i][j] = true;
        }
    }

    int m, s, e;
    cin >> m;

    for(int i = 0; i < m; i++)
    {
        cin >> s >> e;
        cout << palindrome[s][e] << "\n";
    }
    
    return 0;
}