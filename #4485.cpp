// 녹색 옷 입은 애가 젤다지?
#include <iostream>
#include <queue>
using namespace std;

int n, ans;
int map[126][126];
int dist[126][126];
bool flag;

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

void initialize()
{
    for(int i = 0; i < 126; i++)
    {
        for(int j = 0; j < 126; j++)
            dist[i][j] = 987654321;
    }
}

void dijkstra()
{
    priority_queue<pair <int, pair <int, int> > > pq;
    pq.push(make_pair(-map[0][0], make_pair(0, 0)));
    dist[0][0] = map[0][0];

    while(!pq.empty())
    {
        int cost = -pq.top().first;
        int x = pq.top().second.first;
        int y = pq.top().second.second;
        pq.pop();

        for(int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx >= 0 && ny >= 0 && nx < n && ny < n)
            {
                int nc = cost + map[nx][ny];
                if(dist[nx][ny] > nc)
                {
                    dist[nx][ny] = nc;
                    pq.push(make_pair(-dist[nx][ny], make_pair(nx, ny)));
                }
            }
        }
    }
    ans = dist[n - 1][n - 1];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int t = 1; ; t++)
    {
        initialize();

        cin >> n;
        if(n == 0)
        {
            flag = true;
            return 0;
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
                cin >> map[i][j];
        }
        
        if(flag)
            return 0;
        
        dijkstra();

        cout << "Problem " << t << ": " << ans << "\n";
    }

    return 0;
}