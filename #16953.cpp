// A -> B
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, cnt = 0;
    cin >> a >> b;

    while(1)
    {
        if(a > b)
        {
            cout << "-1\n";
            break;
        }
        if(a == b)
        {
            cnt++;
            cout << cnt << "\n";
            break;
        }
        if(b % 10 == 1)
        {
            b--;
            b /= 10;
        }
        else if(b % 2 == 0)
        {
            b /= 2;
        }
        else 
        {
            cout << "-1\n";
            break;
        }
        cnt++;
    }
    return 0;
}