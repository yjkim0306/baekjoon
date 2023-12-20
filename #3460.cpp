// 이진수
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int digit = 0;
        while(n > 0)
        {
            if(n % 2 == 1)
                cout << digit << " ";
            n /= 2;
            digit++;
        }
    }
    
    return 0;
}