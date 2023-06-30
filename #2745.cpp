// 진법 변환
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string b;
    int n;
    cin >> b >> n;

    int sum(0);
    for(int i = 0; i < b.length(); i++)
    {
        int temp = b[b.length() - (i + 1)];
        if('0' <= temp && temp <= '9')
            temp -= '0';
        else
            temp = temp + 10 - 'A';
        sum += (temp * (int)pow(n, i));
    }

    cout << sum << "\n";
    
    return 0;
}