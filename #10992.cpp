// 별 찍기 - 17
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        if(i == n)
        {
            for(int j = 0; j < 2 * n - 1; j++)
                cout << "*";
        }
        else
        {
            for(int j = n - i; j >= 1; j--)
                cout << " ";
            cout << "*";
            if(i != 1)
            {
                for(int j = 1; j <= 2 * (i - 1) - 1; j++)
                    cout << " ";
                cout << "*";
            }
        }
        cout << "\n";
    }
    return 0;
}