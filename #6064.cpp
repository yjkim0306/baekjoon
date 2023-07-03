// 카잉 달력
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--) 
    {
        int m, n, x, y;
        cin >> m >> n >> x >> y;

        int target_x, target_y;
        if(x > y)
        {
            target_x = x - y + 1;
            target_y = 1;
        }

        else
        {
            target_y = y - x + 1;
            target_x = 1;
        }

        int cnt = 1, nx = 1, ny = 1;
        bool stop = false;
        while(!stop)
        {
            if(nx == target_x && ny == target_y)
            {
                cnt = cnt + x - target_x;
                nx = x;
                ny = y;
                stop = true;
            }
            else if(m - nx < n - ny)
            {
                ny = ny + m - nx + 1;
                cnt = cnt + m - nx + 1;
                nx = 1;
            }
            else if(m - nx > n - ny)
            {
                nx = nx + n - ny + 1;
                cnt = cnt + n - ny + 1;
                ny = 1;
            }
            else
            {
                cnt = cnt + n - ny;
                nx = m;
                ny = n;
                stop = true;
            }
        }
        if(nx == x && ny == y)
            cout << cnt << "\n";
        else
            cout << "-1\n";
    }
    
    return 0;
}