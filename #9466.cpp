// 텀 프로젝트
#include <iostream>
using namespace std;

int t, n;
int arr[100001];
bool visited[100001];
bool match[100001];
int ans;

void dfs(int x)
{
    visited[x] = true;
    int next = arr[x];
    if(!visited[next])
        dfs(next);
    else
    {
        if(!match[next])
        {
            for(int i = next; i != x; i = arr[i])
                ans++;
            ans++;
        }
    }
    match[x] = true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;

    while(t--)
    {
        cin >> n;

        for(int i = 1; i <= n; i++)
        {
            visited[i] = false;
            match[i] = false;
        }
        ans = 0;

        for(int i = 1; i <= n; i++)
            cin >> arr[i];

        for(int i = 1; i <= n; i++)
        {
            if(visited[i])
                continue;
            dfs(i);
        }
        
        cout << n - ans << "\n";
    }
    return 0;
}