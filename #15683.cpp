// 감시
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int dx[4] = {0, -1, 0, 1}; // 오, 상, 왼, 하
int dy[4] = {1, 0, -1, 0};
int n, m;
int cctv[8][8];
vector<pair <int, int> > cctv_pos;
int res = 64;

void check(int x, int y, int direction)
{
    direction %= 4;
    while(1)
    {
        int nx = x + dx[direction];
        int ny = y + dy[direction];
        x = nx;
        y = ny;
        if(nx < 0 || nx >= n || ny < 0 || ny >= m)
            return;
        if(cctv[nx][ny] == 6)
            return;
        if(cctv[nx][ny] != 0)
            continue;
        cctv[nx][ny] = '#';
    }
}

void simulate(int idx)
{
    int cctv_cnt = cctv_pos.size();
    if(idx == cctv_cnt)
    {
        int temp_res = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(cctv[i][j] == 0)
                    temp_res++;
            }
        }
        res = min(res, temp_res);
        return;
    }
    int x = cctv_pos[idx].first;
    int y = cctv_pos[idx].second;
    int backup[8][8];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            backup[i][j] = cctv[i][j];
    }
    for(int direction = 0; direction < 4; direction++)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
                backup[i][j] = cctv[i][j];
        }
        if(cctv[x][y] == 1)
            check(x, y, direction);
        else if(cctv[x][y] == 2)
        {
            check(x, y, direction);
            check(x, y, direction + 2);
        }
        else if(cctv[x][y] == 3)
        {
            check(x, y, direction);
            check(x, y, direction + 1);
        }
        else if(cctv[x][y] == 4)
        {
            check(x, y, direction);
            check(x, y, direction + 1);
            check(x, y, direction + 2);
        }
        else if(cctv[x][y] == 5)
        {
            check(x, y, direction);
            check(x, y, direction + 1);
            check(x, y, direction + 2);
            check(x, y, direction + 3);
        }
        simulate(idx + 1);
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
                cctv[i][j] = backup[i][j];
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> cctv[i][j];
            if(cctv[i][j] >= 1 && cctv[i][j] <= 5)
                cctv_pos.push_back(make_pair(i, j));
        }
    }

    simulate(0);
    
    cout << res << "\n";
    
    return 0;
}