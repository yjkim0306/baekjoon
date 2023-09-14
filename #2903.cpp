// 중앙 이동 알고리즘
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x = 2;
    cin >> n;
    
    while(n--)
        x += (x - 1);

    x *= x;
    cout << x << "\n";

    return 0;
}