// 심부름 가는 길
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int sum = a + b + c + d;
    cout << sum / 60 << "\n" << sum % 60 << "\n";
    
    return 0;
}