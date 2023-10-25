// 맥주 마시면서 걸어가기
#include <iostream>
#include <queue>
#include <cstring>
#include <cmath>
using namespace std;

struct point{
    int x;
    int y;
};

point store[100];
point festival;
point home;
bool visited[100];

bool bfs(int n)
{
    queue<pair <int, int> > q;
    q.push(make_pair(home.x, home.y));

    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if(abs(festival.x - x) + abs(festival.y - y) <= 1000)
            return true;
        for(int i = 0; i < n; i++)
        {
            if(visited[i])
                continue;
            if(abs(store[i].x - x) + abs(store[i].y - y) <= 1000)
            {
                visited[i] = true;
                q.push(make_pair(store[i].x, store[i].y));
            }
        }
    }

    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        cin >> home.x >> home.y;
        for(int i = 0; i < n; i++)
            cin >> store[i].x >> store[i].y;
        cin >> festival.x >> festival.y;

        bool flag = bfs(n);
        if(flag) 
            cout << "happy\n";
        else
            cout << "sad\n";
        memset(visited, false, sizeof(visited));
    }
    
    return 0;
}