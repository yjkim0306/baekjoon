// 스타트링크
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int f, s, g, u, d;
int elevator[1000001];
bool visited[1000001];
vector<int> dx;

void bfs(int idx)
{
    visited[idx] = true;
    queue<int> q;
    q.push(idx);

    while(!q.empty())
    {
        idx = q.front();
        q.pop();

        for(int i = 0; i < 2; i++)
        {
            int v = idx + dx[i];

            if(v > 0 && v <= f)
            {
                if(!visited[v])
                {
                    visited[v] = true;
                    q.push(v);
                    elevator[v] = elevator[idx] + 1;
                }
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> f >> s >> g >> u >> d;

    dx.push_back(u);
    dx.push_back(d * -1);
    
    bfs(s);

    if(visited[g])
        cout << elevator[g] << "\n";
    else
        cout << "use the stairs\n";
        
    return 0;
}