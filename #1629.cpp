// 곱셈
#include <iostream>
using namespace std;
long long a, b, c, res;
long long fpow(long long b)
{
    if(b == 0) return 1;
    if(b == 1) return a % c;
    res = fpow(b / 2) % c;
    if(b % 2 == 0) return res * res % c;
    return res * res % c * a % c;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a >> b >> c;

    cout << fpow(b) << "\n";

    return 0;
}