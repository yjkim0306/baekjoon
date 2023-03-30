// 네 번째 점
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();

    int x1 = 0;
    int x2 = 0;
    int x3 = 0;
    int y1 = 0;
    int y2 = 0;
    int y3 = 0;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if(x1 == x2) cout << x3 << " ";
    else if(x1 == x3) cout << x2 << " ";
    else cout << x1 << " ";
    
    if(y1 == y2) cout << y3 << "\n";
    else if(y1 == y3) cout << y2 << "\n";
    else cout << y1 << "\n";

    return 0;
}