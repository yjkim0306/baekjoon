// 숫자 카드 2
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n; // 가지고 있는 숫자 카드의 개수
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int m; // 탐색해야 되는 숫자 카드의 개수
    int p; // 찾아야 되는 숫자
    cin >> m;
    vector<int> res(m);
    for(int i = 0; i < m; i++)
    {
        cin >> p;
        auto upper = upper_bound(v.begin(), v.end(), p); // C++의 upper_bound 함수
        auto lower = lower_bound(v.begin(), v.end(), p);
        res[i] = upper - lower;
    }
    for(auto n : res)
    {
        cout << n << " ";
    }
    cout << '\n';

    return 0;
}