// 차이를 최대로
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, sum, res = 0;
    cin >> n;
    vector<int> v;
    v.resize(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    
    sort(v.begin(), v.end());

    while(next_permutation(v.begin(), v.end()))
    {
        sum = 0;
        for(int i = 0; i < v.size() - 1; i++)
            sum += abs(v[i] - v[i + 1]);
        res = max(res, sum);
    }

    cout << res << "\n";
    
    return 0;
}