// N과 M (11)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int arr[8];
vector<int> v;

void dfs(int start)
{
    if(start == m)
    {
        for(int i = 0; i < m; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
    else
    {
        for(int i = 1; i < v.size(); i++)
        {
            arr[start] = v[i - 1];
            dfs(start + 1);
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
    {
        int input;
        cin >> input;
        v.push_back(input);
    }
    
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end() - 1);
    dfs(0);

    return 0;
}