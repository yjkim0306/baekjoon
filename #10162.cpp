// 전자레인지
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a = 0, b = 0, c = 0, t;
    cin >> t;
    
    if(t % 10 != 0)
        cout << "-1\n";
    else
    {
        a = t / 300;
        b = (t % 300) / 60;
        c = ((t % 300) % 60) / 10;
        cout << a << " " << b << " " << c << "\n";
    }

    return 0;
}