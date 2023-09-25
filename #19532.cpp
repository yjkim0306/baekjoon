// 수학은 비대면강의입니다
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    int x = (c * e - b * f) / (a * e - b * d);
    int y = (c * d - a * f) / (b * d - a * e);

    cout << x << " " << y << "\n";
    
    return 0;
}