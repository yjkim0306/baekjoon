// 삼각형과 세 변
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(1)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if(a == 0 && b == 0 && c == 0)
            break;
        if(a + b <= c || b + c <= a || c + a <= b)
        {
            cout << "Invalid\n";
            continue;
        }
        if(a == b && b == c)
            cout << "Equilateral\n";
        if((a == b && b != c) || (a == c && c != b) || (b == c && a != b))
            cout << "Isosceles\n";
        if(a != b && b != c && c != a)
            cout << "Scalene\n";
    }

    return 0;
}