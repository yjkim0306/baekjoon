// 랜선 자르기
#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

int k, n;
vector<long long> v;

bool canMake(vector<long long> cables, int k, int n, long long length)
{
    int cnt = 0;

    for(int i = 0; i < k; i++) cnt += cables[i] / length;

    return cnt >= n; 
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> k >> n;
    v.assign(n, 0);

    for(int i = 0; i < k; i++) cin >> v[i];

    long long left = 1;
    long long right = INT_MAX;

    while(left < right)
    {
        long long mid = (left + right + 1) / 2;
        if(canMake(v, k, n, mid)) left = mid;
        else right = mid - 1;
    }
    
    cout << left << "\n";

    return 0;
}