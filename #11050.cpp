// 이항 계수 1
#include <iostream>
using namespace std;
int Factorial(int num)
{
    if(num == 0) return 1;

    int res = 1;
    for(int i = num; i >= 1; i--)
    {
        res *= i;
    }

    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int N, K, res;
    cin >> N >> K;
    res = Factorial(N) / (Factorial(K) * Factorial(N-K));
    cout << res << "\n";
    return 0;
}