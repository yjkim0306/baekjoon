// 별 찍기 - 9
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin >> n;
    for(int i = 1; i <= n-1; i++)
    {
        for(int j = n-1; j >= n-i+1; j--) cout << " ";
        for(int j = 2*(n-i); j >= 0; j--) cout << "*";
        cout << "\n";
    }
    for(int i = 1; i <= n; i ++)
    {
        for(int j = 1; j <= n-i; j++) cout << " ";
        for(int j = 1; j <= 2*i-1; j++) cout << "*";
        cout << "\n";
    }
    return 0;
}