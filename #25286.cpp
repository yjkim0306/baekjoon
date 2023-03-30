// 11월 11일
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t, y, m;
    int arr[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> t;

    while(t--)
    {
        cin >> y >> m;
        if(m == 1) cout << y - 1 << " " << 12 << " " << 31;
        else
        {
            cout << y << " " << m - 1 << " ";
            if(m == 3 && ((y % 100 != 0 && y % 4 == 0) || y % 400 == 0)) cout << 29;
            else cout << arr[m - 1];
        }

        cout << "\n";
    }
    return 0;
}