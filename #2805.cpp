// 나무 자르기
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<long long> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long n, m;
    cin >> n >> m;
    v.assign(n, 0);

    for(int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    long long left = 0;
    long long right = v[n - 1];
    long long res;

    while(left <= right)
    {
        long long mid = (left + right) / 2;
        long long sum = 0;

        for(int i = 0; i < n; i++)
        {
            if(v[i] > mid) sum += v[i] - mid;
        }
        if(sum >= m)
        {
            res = mid;
            left = mid + 1;
        }
        else right = mid - 1;
    }
    
    cout << res << "\n";

    return 0;
}