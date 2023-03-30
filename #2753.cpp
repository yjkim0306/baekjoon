// 윤년
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int lyear;
    cin >> lyear;
    if(lyear % 4 == 0 && lyear % 100 != 0 || lyear % 400 == 0) cout << "1\n";
    else cout << "0\n";
    
    return 0;
}