// 저작권
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a, i;
    cin >> a >> i;
    if(a == 1)
        cout << a * i << "\n";
    else
        cout << a * (i - 1) + 1 << "\n";

    return 0;
}