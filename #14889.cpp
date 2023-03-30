// 스타트와 링크
#include <iostream>
#include <cmath>
using namespace std;

int n;
int dp[21][21];
bool visited[21];
int ans = 987654321;

void dfs(int a, int idx)
{
    if(a == n / 2)
    {
        int start = 0, link = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++) 
            {
                if(visited[i] == true && visited[j] == true) start += dp[i][j];
                if(visited[i] == false && visited[j] == false) link += dp[i][j];
            }
        }
        int check = abs(start - link);
        if(ans > check) ans = check;
        return;
    }

    for(int i = idx; i < n; i++)
    {
        visited[i] = true;
        dfs(a + 1, i + 1);
        visited[i] = false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++) cin >> dp[i][j];
    }
    
    dfs(0, 1);

    cout << ans << "\n";
    
    return 0;
}