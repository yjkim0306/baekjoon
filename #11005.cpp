// 진법 변환 2
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, b;
    cin >> n >> b;

    string str;
    while(n != 0)
    {
        int temp = n % b;
        if(temp > 9)
        {
            temp = temp - 10 + 'A';
            str += temp;
        }
        else
            str += ('0' + temp);
        n /= b;
    }
    reverse(str.begin(), str.end());

    cout << str << "\n";
    
    return 0;
}