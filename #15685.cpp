// 드래곤 커브
#include <iostream>
#include <vector>
using namespace std;

int n, x, y, d, g;
int dx[4] = {0, -1, 0, 1}; // 하좌상우
int dy[4] = {1, 0, -1, 0};
int graph[101][101]; // 점이 찍혔는지 저장하는 배열
vector<int> v; // 방향 정보를 저장하는 벡터

void dragonCurve()
{
    int s = v.size();
    for(int i = s - 1; i >= 0; i--)
    {
        int dir = (v[i] + 1) % 4;
        x += dx[dir];
        y += dy[dir];
        graph[x][y] = 1;

        v.push_back(dir);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> y >> x >> d >> g;
        v.clear();
        graph[x][y] = 1;
        x += dx[d];
        y += dy[d];
        graph[x][y] = 1;

        v.push_back(d);
        while(g--)
            dragonCurve();
    }

    for(int i = 0; i < 101; i++)
    {
        for(int j = 0; j < 101; j++)
        {
            if(graph[i][j] == 1 && graph[i + 1][j] == 1 && graph[i][j + 1] == 1 && graph[i + 1][j + 1] == 1)
                cnt++;
        }
    }

    cout << cnt << "\n";

    return 0;
}