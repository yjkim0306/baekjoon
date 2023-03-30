// 단지번호붙이기
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int graph[25][25];
bool visited[25][25];
int dy[4] = {0, 1, 0, -1};
int dx[4] = {-1, 0, 1, 0};
vector<int> v;
int n, cnt = 0;

void dfs(int x, int y)
{
    for(int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx >= n || nx < 0 || ny >= n || ny < 0) continue;
        if(visited[nx][ny] == false && graph[nx][ny] == 1)
        {
            visited[nx][ny] = true;
            cnt++;
            dfs(nx, ny);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int res = 0;
    cin >> n;
    string str;
    
    for(int i = 0; i < n; i++)
    {
        cin >> str;
        for(int j = 0; j < str.length(); j++)
        {
            visited[i][j] = false;
            if(str[j] == '1') graph[i][j] = 1;
            else graph[i][j] = 0;
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(graph[i][j] == 1 && visited[i][j] == false)
            {
                visited[i][j] = true;
                cnt = 1;
                dfs(i, j);
                v.push_back(cnt);
                res++;
            }
        }
    }
    sort(v.begin(), v.end());
    cout << res << "\n";
    for(int i = 0; i < v.size(); i++) cout << v[i] << "\n";

    return 0;
}