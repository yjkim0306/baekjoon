// 사다리 조작
#include <iostream>
using namespace std;

int ans = 987654321;
int ladder[31][11];
int n, m, h;

bool isManipulated()
{
    for(int i = 1; i <= n; i++)
    {
        int col = i;
        for(int j = 1; j <= h; j++)
        {
            if(ladder[j][col]) 
                col++;
            else if(ladder[j][col - 1])
                col--;
        }
        if(col != i)
            return false;
    }

    return true;
}

void dfs(int idx, int cnt)
{
    if(idx == cnt)
    {
        if(isManipulated())
        {
            cout << idx << "\n";
            exit(0);
        }
        return;
    }
    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j <= h; j++)
        {
            if(ladder[j][i] || ladder[j][i - 1] || ladder[j][i + 1])
                continue;
            ladder[j][i] = 1;
            dfs(idx, cnt + 1);
            ladder[j][i] = 0;

            while(!ladder[j][i - 1] && !ladder[j][i + 1])
                j++;
        }
    }
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m >> h;
    for(int i = 1; i <= m; i++)
    {
        int a, b;
        cin >> a >> b;
        ladder[a][b] = 1;
    }

    for(int i = 0; i < 4; i++)
        dfs(i, 0);
    
    if(ans == 987654321)
        ans = -1;

    cout << ans << "\n";

    return 0;
}