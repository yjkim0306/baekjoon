// N과 M (6)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[8];
int n, m;
vector<int> v;
bool visited[8];

void func(int idx)
{
    if(idx == m)
    {
        for(int i = 0; i < m; i++)
            cout << arr[i] << " ";
        cout << "\n";

        return;
    }

    for(int i = 0; i < v.size(); i++)
    {
        if(visited[i] || v[i] < arr[idx - 1])
            continue;
        visited[i] = true;
        arr[idx] = v[i];
        func(idx + 1);
        visited[i] = false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    v.resize(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    func(0);

    return 0;
}