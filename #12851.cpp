// 숨바꼭질 2
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, k;
bool first = true;
bool visited[100003];
int res = 100003, res2;

void bfs(int a, int b)
{
    queue<pair <int, int> > q;
    q.push(make_pair(a, b));
    visited[a] = true;

    while(!q.empty())
    {
        int x = q.front().first;
        int cnt = q.front().second;
        q.pop();

        visited[x] = true;
        if(!first && res == cnt && x == k)
            res2++;

        if(first && x == k)
        {
            res = cnt;
            first = false;
            res2++;
        }

        if(x + 1 < 100001 && x + 1 >= 0 && !visited[x + 1])
            q.push(make_pair(x + 1, cnt + 1));
        
        if(x - 1 < 100001 && x - 1 >= 0 && !visited[x - 1])
            q.push(make_pair(x - 1, cnt + 1));
        if(x * 2 < 100001 && x * 2 >= 0 && !visited[x * 2])
            q.push(make_pair(x * 2, cnt + 1));
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;

    bfs(n, 0);

    cout << res << "\n" << res2 << "\n";
    
    return 0;
}