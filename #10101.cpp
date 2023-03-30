// 삼각형 외우기
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    if(a + b + c == 180)
    {
        if(a == 60 && b == 60 && c == 60) cout << "Equilateral\n";
        if(a == b && c != a || b == c && c != a || a == c && c != b) cout << "Isoceles\n";
        if(a != b && a != c && b != c) cout << "Scalene\n";
    }
    else cout << "Error\n";

    return 0;
}