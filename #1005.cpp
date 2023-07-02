// ACM Craft
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    
    while(t--)
    {
        int n, k;
        cin >> n >> k;

        int time[1002];
        for(int i = 1; i <= n; i++)
            cin >> time[i];

        vector<int> adj[1002];
        int inDegree[1002] = {0, };
        queue<int> q;
        int res[1002];

        while(k--)
        {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            inDegree[y]++;
        }

        int w;
        cin >> w;

        for(int i = 1; i <= n; i++)
        {
            if(inDegree[i] == 0)
                q.push(i);
            res[i] = time[i];
        }

        while(!q.empty())
        {
            int current = q.front();
            q.pop();

            for(int i = 0; i < adj[current].size(); i++)
            {
                int next = adj[current][i];
                inDegree[next]--;

                res[next] = max(res[next], res[current] + time[next]);

                if(inDegree[next] == 0)
                    q.push(next);
            }
        }

        cout << res[w] << "\n";
    }
    
    return 0;
}