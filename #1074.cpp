// Z
#include <iostream>
#include <cmath>
using namespace std;

int n, r, c, cnt = 0;

void func(int n, int x, int y)
{
    if(r == y && c == x) 
    {
        cout << cnt << "\n";
        return;
    }
    else if(c < x + n && r < y + n && c >= x && r >= y)
    {
        func(n / 2, x, y);
        func(n / 2, x + n / 2, y);
        func(n / 2, x, y + n / 2);
        func(n / 2, x + n / 2, y + n / 2);
    }
    else cnt += n * n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> r >> c;

    func(pow(2, n), 0, 0);

    return 0;
}