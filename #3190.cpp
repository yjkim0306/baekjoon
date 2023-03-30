// 뱀
#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int n, k, l;
int graph[100][100];
vector<pair<int, char> > v;

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int TurnDirection(int x, char c)
{
    if(c == 'L')
    {
        if(x == 0) return 3;
        else if(x == 1) return 2;
        else if(x == 2) return 0;
        else if(x == 3) return 1;
    }
    else if(c == 'D')
    {
        if(x == 0) return 2;
        else if(x == 1) return 3;
        else if(x == 2) return 1;
        else if(x == 3) return 0;
    }
}

void bfs()
{
    deque<pair <int, int> > dq;
    graph[0][0] = 2;
    int x = 0, y = 0, d = 0, res = 0, idx = 0;
    dq.push_back(make_pair(x, y));

    while(1)
    {
        res++;

        int nx = x + dx[d];
        int ny = y + dy[d];

        if((nx < 0 || ny < 0 || nx >= n || ny >= n) || graph[nx][ny] == 2)
            break;
        else if(graph[nx][ny] == 0)
        {
            graph[nx][ny] = 2;
            graph[dq.back().first][dq.back().second] = 0;
            dq.pop_back();
            dq.push_front(make_pair(nx, ny));
        }
        else if(graph[nx][ny] == 1)
        {
            graph[nx][ny] = 2;
            dq.push_front(make_pair(nx, ny));
        }

        if(idx < v.size())
        {
            if(res == v[idx].first)
            {
                if(v[idx].second == 'L') d = TurnDirection(d, 'L');
                else if(v[idx].second == 'D') d = TurnDirection(d, 'D');
                idx++;
            }
        }
        
        x = nx;
        y = ny;
    }

    cout << res << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k; 
    for(int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x - 1][y - 1] = 1;
    }

    cin >> l;
    for(int i = 0; i < l; i++)
    {
        int x;
        char y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    bfs();

    return 0;
}