// 수 이어 쓰기 1
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, res = 0;
    cin >> n;

    for(int i = 1; i <= n; i *= 10)
        res += n - i + 1;
    
    cout << res << "\n";
    
    return 0;
}