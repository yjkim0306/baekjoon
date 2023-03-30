// 최소공배수
#include <iostream>
using namespace std;
int GCD(int a, int b)
{
    int tmp, n;
    if(a<b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }

    while(b != 0)
    {
        n = a%b;
        a = b;
        b = n;
    }
    return a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int T, a, b;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        cin >> a >> b;
        cout << a * b / GCD(a, b) << "\n";
    }

    return 0;
}