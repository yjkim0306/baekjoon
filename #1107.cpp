// 리모컨
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool button[10];

int check(int n)
{
    if(n == 0)
    {
        if(button[n])
            return 0;
        else
            return 1;
    }

    int len = 0;
    while(n > 0)
    {
        if(button[n % 10])
            return 0;
        
        len++;
        n /= 10;
    }

    return len;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    if(m > 0)
    {
        for(int i = 0; i < m; i++)
        {
            int idx;
            cin >> idx;
            button[idx] = true;
        }
    }
    
    int ans = abs(n - 100);

    for(int i = 0; i <= 1000000; i++)
    {
        int x = i;
        int len = check(x);

        if(len > 0)
        {
            int press = abs(x- n);

            if(ans > len + press)
                ans = len + press;
        }
    }

    cout << ans << "\n";

    return 0;
}