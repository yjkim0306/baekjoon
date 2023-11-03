// 핸드폰 요금
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, y = 0, m = 0;
    cin >> n;
    
    while(n--)
    {
        int num;
        cin >> num;
        y += (num / 30 + 1) * 10;
        m += (num / 60 + 1) * 15;
    }

    if(y > m)
        cout << "M " << m << "\n";
    else if(y < m)
        cout << "Y " << y << "\n";
    else
        cout << "Y M " << y << "\n";
        
    return 0;
}