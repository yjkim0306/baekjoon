// 과자
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int k, n, m;
    cin >> k >> n >> m;
    if(k * n <= m)
        cout << "0\n";
    else
        cout << k * n - m << "\n";
        
    return 0;
}