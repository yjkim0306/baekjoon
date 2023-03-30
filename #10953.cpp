// A+B - 6
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int a, b;
    char c;
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> a >> c >> b;
        cout << a + b << "\n";
    }
    return 0;
}