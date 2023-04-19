// 주유소
#include <iostream>
using namespace std;

int dist[100000];
int price[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    long long ans = 0;
    long long cur;
    cin >> n;
    
    for(int i = 1; i < n; i++)
        cin >> dist[i];

    for(int i = 0; i < n; i++)
        cin >> price[i];

    cur = price[0];
    ans = cur * dist[1];

    for(int i = 1; i < n; i++)
    {
        if(cur < price[i])
            ans += cur * dist[i + 1];
        else
        {
            cur = price[i];
            ans += cur * dist[i + 1];
        }
    }

    cout << ans << "\n";

    return 0;
}