// 터렛
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++)
    {    
        int x1, y1, x2, y2, r1, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        
        int d = pow((x1 - x2), 2) + pow((y1 - y2), 2); // 두 점 사이의 거리
        int diff = pow((r1 - r2), 2); 
        int sum = pow((r1 + r2), 2);

        if(d == 0)
        {
            if(diff == 0) cout << "-1\n";
            else cout << "0\n";
        }
        else if(d == diff || d == sum) cout << "1\n";
        else if(d > diff && d < sum) cout << "2\n";
        else cout << "0\n";
    }

    return 0;
}