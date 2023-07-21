// 탈출
#include <iostream>
#include <queue>
using namespace std;

int r, c;
char map[51][51];
pair<int, int> beaver;
queue<pair<int, int> > water;
queue<pair<int, int> > hedgehog;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int res;

void bfs()
{
    while(!hedgehog.empty()) 
    {
        int cnt = water.size();
        
        for(int i = 0; i < cnt; i++)
        {
            int x = water.front().first;
            int y = water.front().second;

            water.pop();

            for(int i = 0; i < 4; i++)
            {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if(nx >= 0 && nx < r && ny >= 0 && ny < c && map[nx][ny] == '.')
                {
                    water.push(make_pair(nx, ny));
                    map[nx][ny] = '*';
                }

            }
        }

        int cnt2 = hedgehog.size();

        for(int i = 0; i < cnt2; i++)
        {
            int x = hedgehog.front().first;
            int y = hedgehog.front().second;

            hedgehog.pop();

            for(int i = 0; i < 4; i++)
            {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if(nx == beaver.first && ny == beaver.second)
                {
                    res++;
                    cout << res << "\n";
                    return;
                }

                if(nx >= 0 && nx < r && ny >= 0 && ny < c && map[nx][ny] == '.')
                {
                    hedgehog.push(make_pair(nx, ny));
                    map[nx][ny] = 'S';
                }
            }
        }
        res++;
    }

    cout << "KAKTUS\n";

    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> r >> c;

    string str;

    for(int i = 0; i < r; i++)
    {
        cin >> str;
        for(int j = 0; j < c; j++)
        {
            map[i][j] = str[j];

            if(str[j] == 'S')
                hedgehog.push(make_pair(i, j));
            else if(str[j] == 'D')
                beaver = make_pair(i, j);
            else if(str[j] == '*')
                water.push(make_pair(i, j));
        }
    }

    bfs();
    
    return 0;
}