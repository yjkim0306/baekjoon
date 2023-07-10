// 소수의 연속합
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<bool> v(n + 1, 1);

    for(int i = 2; i * i <= n; i++)
    {
        if(!v[i])
            continue;
        for(int j = 2 * i; j <= n; j += i)
            v[j] = false;
    }

    vector<int> prime;
    for(int i = 2; i <= n; i++)
        if(v[i])
            prime.push_back(i);

    int ans = 0, sum = 0, start = 0, end = 0;

    while(1)
    {
        if(sum > n)
        {
            sum -= prime[start];
            start++;
        }
        else if(sum < n)
        {
            if(end >= prime.size())
                break;
            sum += prime[end];
            end++;
        }
        else
        {
            ans++;
            if(end >= prime.size())
                break;
            sum += prime[end];
            end++;
        }
    }
    cout << ans << "\n";
    
    return 0;
}