// 더하기
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, n, sum;
    cin >> t;

    while(t--)
    {
        sum = 0;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            sum += input;
        }
        cout << sum << "\n";
    }

    return 0;
}