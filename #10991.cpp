// 별 찍기 - 16
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
        for(int j = i; j <= n - 1; j++)
            cout << " ";
        for(int j = 1; j <= i * 2 - 1; j++)
        {
            if(j % 2 == 1)
                cout << "*";
            else
                cout << " ";

        }
        cout << "\n";
    }
    
    return 0;
}