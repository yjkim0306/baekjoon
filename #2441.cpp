// 별 찍기 - 4
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin >> n;
    for(int i = n; i > 0; i--)
    {
        for(int j = 0; j < n-i; j++)
        {
            cout << " ";
        }
        for(int j = n-i; j < n; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}