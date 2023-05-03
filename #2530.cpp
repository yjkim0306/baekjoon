// 인공지능 시계
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;
    int d;
    cin >> d;

    cout << (a + (b + (c + d) / 60) / 60) % 24 << " " << (b + (c + d) / 60) % 60 << " " << (c + d) % 60 << "\n";

    return 0;
}