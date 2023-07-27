// 배열 합치기
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, input;
    vector<int> v;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        cin >> input;
        v.push_back(input);
    }
    for(int i = 0; i < m; i++)
    {
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n + m; i++)
        cout << v[i] << " ";
    cout << "\n";
    
    return 0;
}