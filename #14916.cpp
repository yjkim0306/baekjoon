// 거스름돈
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int start = n / 5;
    int remain = (n - start * 5) % 2;
    while(remain != 0)
    {
        if(start == 0)
        {
            cout << "-1\n";
            return 0;
        }
        start -= 1;
        remain = (n - start * 5) % 2;
    }

    cout << start + (n - start * 5) / 2 << "\n";

    return 0;
}