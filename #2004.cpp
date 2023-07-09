// 조합 0의 개수
#include <iostream>
using namespace std;

long long func(int n, int x)
{
    int num = 0; 
    for(long long i = x; n / i >= 1; i *= x)
        num += n / i;

    return num;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    long long five = 0, two = 0;

    five = func(n, 5) - func(n - m, 5) - func(m, 5);
    two = func(n, 2) - func(n - m, 2) - func(m, 2);

    cout << min(five, two) << "\n";
    
    return 0;
}