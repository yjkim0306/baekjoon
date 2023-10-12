// 공
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int m;
    cin >> m;

    int current = 1;
    while(m--)
    {
        int x, y;
        cin >> x >> y;
        if(x == current)
            current = y;
        else if(y == current)
            current = x;
    }

    cout << current << "\n";

    return 0;
}