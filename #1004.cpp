// 어린 왕자
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, t;
    cin >> t;
    int enter, exit;
    int x, y, r, x1, y1, x2, y2;
    
    while(t--)
    {
        cin >> x1 >> y1 >> x2 >> y2;

        cin >> n;

        enter = 0;
        exit = 0;
        while(n--)
        {
            cin >> x >> y >> r;

            if((x - x1) * (x - x1) + (y - y1) * (y - y1) < r * r)
                if((x - x2) * (x - x2) + (y - y2) * (y - y2) > r * r)
                    exit++;
            if((x - x1) * (x - x1) + (y - y1) * (y - y1) > r * r)
                if((x - x2) * (x - x2) + (y - y2) * (y - y2) < r * r)
                    enter++;
        }

        cout << enter + exit << "\n";
    }

    return 0;
}