// 숨바꼭질 4
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, k;
int parent[1000001];
queue< pair<int, int> > q;
bool visited[1000001];
vector<int> path;

void bfs()
{
    while(!q.empty())
    {
        int x = q.front().first;
        int time = q.front().second;
        visited[x] = true;
        q.pop();
        
        if(x == k)
        {
            int idx = x;
            while(idx != n)
            {
                path.push_back(idx);
                idx = parent[idx];
            }
            cout << time << "\n";
            break;
        }

        if(x - 1 >= 0 && x - 1 <= 200000 && !visited[x - 1])
        {
            q.push(make_pair(x - 1, time + 1));
            visited[x - 1] = true;
            parent[x - 1] = x;
        }

        if(x + 1 >= 0 && x + 1 <= 200000 && !visited[x + 1])
        {
            q.push(make_pair(x + 1, time + 1));
            visited[x + 1] = true;
            parent[x + 1] = x;
        }

        if(x * 2 >= 0 && x * 2 <= 200000 && !visited[x * 2])
        {
            q.push(make_pair(x * 2, time + 1));
            visited[x * 2] = true;
            parent[x * 2] = x;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;
    q.push(make_pair(n, 0));
    
    bfs();
    cout << n << " ";
    for(int i = path.size() - 1; i >= 0; i--)
        cout << path[i] << " ";
    cout << "\n";

    return 0;
}