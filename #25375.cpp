// 아주 간단한 문제
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int q;
    cin >> q;

    while(q--)
    {
        int a, b;
        cin >> a >> b;
        if(a * 2 <= b && b % a == 0)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}