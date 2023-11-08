// N과 M (10)
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int n, m;
int first[9], arr[9];
bool visited[9];
set<vector<int> > s;

void dfs(int num, int k)
{
    if(k == m)
    {
        vector<int> v;
        for(int i = 0; i < m; i++)
            v.push_back(arr[i]);
        s.insert(v);
        v.clear();
    }
    else
    {
        for(int i = num; i < n; i++)
        {
            if(!visited[i])
            {
                visited[i] = true;
                arr[k] = first[i];
                dfs(i + 1, k + 1);
                visited[i] = false;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for(int i = 0; i < n; i++)
        cin >> first[i];
    sort(first, first + n);

    dfs(0, 0);

    for(auto vector: s)
    {
        for(auto temp: vector)
            cout << temp << " ";
        cout << "\n";
    }
    
    return 0;
}