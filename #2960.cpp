// 에라토스테네스의 체
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<bool> erase(n + 1);

    int cnt = 0;
    for(int i = 2; i <= n; i++)
    {
        for(int j = i; j <= n; j+= i)
        {
            if(!erase[j])
            {
                erase[j] = true;
                cnt++;
            }
            if(cnt == k)
            {
                cout << j << "\n";
                return 0;
            }
        }
    }

    return 0;
}