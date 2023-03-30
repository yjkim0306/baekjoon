// 최대공약수와 최소공배수
#include <iostream>
using namespace std;
int GCD(int a, int b)
{
    int tmp, n;
    if(a < b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }

    while(b != 0)
    {
        n = a % b;
        a = b;
        b = n;
    }
    return a;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;

    cout << GCD(a, b) << "\n";
    cout << a * b / GCD(a, b) << "\n";

    return 0;
}