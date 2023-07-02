// 숨바꼭질 3
#include <iostream>
#include <queue>
using namespace std;

int n, k, weight;
int visited[100001];
int minWeight = 1000000;

void bfs()
{
    queue<int> q;
    q.push(n);
    visited[n] = 0;

    while(!q.empty())
    {
        auto current = q.front();
        q.pop();

        if(current == k)
        {
            minWeight = visited[current];
            return;
        }

        if(current * 2 < 100001 && visited[current * 2] > visited[current])
        {
            visited[current * 2] = visited[current];
            q.push(current * 2);
        }

        if(current + 1 < 100001 && visited[current + 1] > visited[current] + 1)
        {
            visited[current + 1] = visited[current] + 1;
            q.push(current + 1);
        }

        if(current - 1 >= 0 && visited[current - 1] > visited[current] + 1)
        {
            visited[current - 1] = visited[current] + 1;
            q.push(current - 1);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n >> k;
    for(int i = 0; i < 100001; i++)
        visited[i] = 1000000;
    bfs();

    cout << minWeight << "\n";

    return 0;
}