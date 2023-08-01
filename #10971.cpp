// 외판원 순회
#include <iostream>
using namespace std;

bool visited[10] = {false,};
int n, ans = 1e9;
int map[10][10];

void tsp(int start, int idx, int cnt, int sum)
{
    if(cnt == n)
    {
        if(map[idx][start] == 0)
            return;
        if(ans > sum + map[idx][start])
            ans = sum + map[idx][start];
        return;
    }
    for(int i = 0; i < n; i++)
    {
        if(visited[i] || map[idx][i] == 0)
            continue;
        visited[i] = true;
        tsp(start, i, cnt + 1, sum + map[idx][i]);
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
        for(int j = 0; j < n; j++)
            cin >> map[i][j];
    }

    for(int i = 0; i < n; i++)
    {
        visited[i] = true;
        tsp(i, i, 1, 0);
        visited[i] = false;
    }

    cout << ans << "\n";

    return 0;
}