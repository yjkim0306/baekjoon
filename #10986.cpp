// 나머지 합
#include <iostream>
using namespace std;

long long mod[1001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, t;
    long long psum = 0, cnt = 0;

    cin >> n >> m;

    for(int i = 1; i <= n; i++)
    {
        cin >> t;
        psum += t;
        mod[psum % m]++;
    }

    for(int i = 0; i <= m; i++)
        cnt += ((mod[i] * (mod[i] - 1)) / 2);

    cout << mod[0] + cnt << "\n";

    return 0;
}