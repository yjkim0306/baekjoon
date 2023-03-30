// 색종이 만들기
#include <iostream>
using namespace std;

int n, cnt1 = 0, cnt2 = 0;
int graph[128][128];

void dfs(int x, int y, int size)
{
    if(size == 1) 
    {
        if(graph[x][y] == 0) cnt1++;
        if(graph[x][y] == 1) cnt2++;
        return;
    }
    bool only0 = true;
    bool only1 = true;

    for(int i = x; i < x + size; i++)
    {
        for(int j = y; j < y + size; j++)
        {
            if(graph[i][j] == 1) only0 = false;
            if(graph[i][j] == 0) only1 = false;
        }
    }

    if(only0) 
    {
        cnt1++;
        return;
    }

    if(only1)
    {
        cnt2++;
        return;
    }

    dfs(x, y, size / 2);
    dfs(x, y + size /2, size / 2);
    dfs(x + size / 2, y, size / 2);
    dfs(x + size / 2, y + size / 2, size / 2);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++) cin >> graph[i][j];
    }
    
    dfs(0, 0, n);

    cout << cnt1 << "\n";
    cout << cnt2 << "\n";

    return 0;
}