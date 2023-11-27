// 낚시왕
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct sharkInfo
{
    int R;
    int C;
    int speed;
    int dir;
    int Size;
    int num;
};

int R, C, M, ans;
vector<int> map[101][101];
vector<sharkInfo> shark;

int dx[5] = {0, -1, 1, 0, 0};
int dy[5] = {0, 0, 0, 1, -1};

bool isBigger(int a, int b)
{
    if(shark[a].Size > shark[b].Size)
        return true;
    return false;
}

bool isEmpty()
{
    for(int i = 0; i < shark.size(); i++)
    {
        if(shark[i].Size != 0)
            return false;
    }
    return true;
}

void fishing(int idx)
{
    for(int i = 1; i <= R; i++)
    {
        if(map[i][idx].size() != 0)
        {
            ans += shark[map[i][idx][0]].Size;
            shark[map[i][idx][0]].Size = 0;
            map[i][idx].clear();
            break;
        }
    }
}

void move()
{
    for(int i = 0; i < shark.size(); i++)
    {
        if(shark[i].Size == 0)
            continue;
        int x = shark[i].R;
        int y = shark[i].C;
        map[x][y].clear();
    }

    for(int i = 0; i < shark.size(); i++)
    {
        if(shark[i].Size == 0)
            continue;
        int x = shark[i].R;
        int y = shark[i].C;
        int speed = shark[i].speed;
        int dir = shark[i].dir;
        
        if(dir == 1 || dir == 2)
        {
            int rotate = (R - 1) * 2;
            if(speed >= rotate)
                speed %= rotate;
            for(int j = 0; j < speed; j++)
            {
                int nx = x + dx[dir];
                int ny = y + dy[dir];
                if(nx < 1)
                {
                    dir = 2;
                    nx += 2;
                }

                if(nx > R)
                {
                    dir = 1;
                    nx -= 2;
                }

                x = nx;
                y = ny;
            }
        }
        else
        {
            int rotate = (C - 1) * 2;
            if(speed >= rotate)
                speed %= rotate;
            for(int j = 0; j < speed; j++)
            {
                int nx = x + dx[dir];
                int ny = y + dy[dir];
                if(ny < 1)
                {
                    dir = 3;
                    ny += 2;
                }

                if(ny > C)
                {
                    dir = 4;
                    ny -= 2;
                }

                x = nx;
                y = ny;
            }
        }
        shark[i].R = x;
        shark[i].C = y;
        shark[i].dir = dir;
        map[x][y].push_back(i);
    }
}

void kill()
{
    for(int i = 1; i <= R; i++)
    {
        for(int j = 1; j <= C; j++)
        {
            if(map[i][j].size() > 1)
            {
                sort(map[i][j].begin(), map[i][j].end(), isBigger);
                int idx = map[i][j][0];
                for(int k = 1; k < map[i][j].size(); k++)
                {
                    shark[map[i][j][k]].Size = 0;
                    shark[map[i][j][k]].R = -1;
                    shark[map[i][j][k]].C = -1;
                }

                map[i][j].clear();
                map[i][j].push_back(shark[idx].num);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> R >> C >> M;
    for(int i = 0; i < M; i++)
    {
        int r, c, s, d, z;
        cin >> r >> c >> s >> d >> z;
        shark.push_back({r, c, s, d, z, i});
        map[r][c].push_back(i);
    }

    if(M == 0)
    {
        cout << 0 << "\n";
        return 0;
    }

    for(int i = 1; i <= C; i++)
    {
        if(isEmpty())
            break;
        fishing(i);
        move();
        kill();
    }
    
    cout << ans << "\n";

    return 0;
}