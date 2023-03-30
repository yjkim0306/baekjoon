// 직사각형에서 탈출
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int x, y, w, h, res;
    cin >> x >> y >> w >> h;
    res = x;
    if(w - x < res) res = w - x;
    if(h - y < res) res = h - y;
    if(y < res) res = y;
    cout << res << "\n";
    return 0;
}