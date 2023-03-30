// DFS와 BFS
/*  정점(node): 위치, 노드
    간선(edge): 노드 사이를 연결하는 선 */
#include <iostream>
#include <queue>
using namespace std;

int n; //정점의 개수
int m; //간선의 개수
int v; //탐색을 시작할 정점의 번호
int map[1001][1001];
bool visited[1001];
queue<int> q;

void reset() //방문 여부를 초기화해주는 함수
{
    for(int i = 1; i <= n; i++)
    {
        visited[i] = 0;
    }
}

void DFS(int v)
{
    visited[v] = true;
    cout << v << " ";
    for(int i = 1; i <= n; i++)
    {
        if(map[v][i] == 1 && visited[i] == 0) DFS(i);
    }
}

void BFS(int v)
{
    q.push(v);
    visited[v] = true;
    cout << v << " ";
    while(!q.empty())
    {
        v = q.front();
        q.pop();

        for(int i = 1; i <= n; i++)
        {
            if(map[v][i] == 1 && visited[i] == 0)
            {
                q.push(i);
                visited[i] = true;
                cout << i << " ";
            }
        }
    }
}

int main()
{

    cin >> n >> m >> v;
    for(int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        map[x][y] = 1;
        map[y][x] = 1;
    }
    reset();
    DFS(v);
    cout << "\n";
    reset();
    BFS(v);

    return 0;
}