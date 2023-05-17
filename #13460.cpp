// 구슬 탈출 2
#include <iostream>
#include <queue>
using namespace std;

struct step
{
    int Rx, Ry;
    int Bx, By;
    int cnt;
};

char map[11][11];
bool visited[11][11][11][11];
int n, m;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void move(int& x, int& y, int& distance, int& i)
{
    while(map[x + dx[i]][y + dy[i]] != '#' && map[x][y] != 'O')
    {
        x += dx[i];
        y += dy[i];
        distance++;
    }
}

void bfs(int Rx, int Ry, int Bx, int By)
{
    queue<step> q;
    q.push({Rx, Ry, Bx, By, 0});
    visited[Rx][Ry][Rx][Ry] = true;
    while(!q.empty())
    {
        int rx = q.front().Rx;
        int ry = q.front().Ry;
        int bx = q.front().Bx;
        int by = q.front().By;
        int count = q.front().cnt;
        q.pop();

        if(count >= 10) 
            break;
        
        for(int i = 0; i < 4; i++)
        {
            int nrx = rx, nry = ry, nbx = bx, nby = by;
            int rc = 0, bc = 0;
            int ncount = count + 1;

            move(nrx, nry, rc, i);
            move(nbx, nby, bc, i);

            if(map[nbx][nby] == 'O')
                continue;
            if(map[nrx][nry] == 'O')
            {
                cout << ncount;
                return;
            }

            if(nrx == nbx && nry == nby)
            {
                if(rc > bc)
                    nrx -= dx[i], nry -= dy[i];
                else
                    nbx -= dx[i], nby -= dy[i];
            }

            if(visited[nrx][nry][nbx][nby])
                continue;
            visited[nrx][nry][nbx][nby] = true;
            q.push({nrx, nry, nbx, nby, ncount});
        }
    }
    cout << "-1\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    int Rx = 0, Ry = 0, Bx = 0, By = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> map[i][j];
            if(map[i][j] == 'R')
            {
                Rx = i;
                Ry = j;
            }
            else if(map[i][j] == 'B')
            {
                Bx = i;
                By = j;
            }
        }
    }
    bfs(Rx, Ry, Bx, By);

    return 0;
}