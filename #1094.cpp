// 막대기
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x;
    cin >> x;

    int cnt = 1, min = 64, sum = 64;

    while(sum > x)
    {
        min /= 2;
        if(sum - min >= x)
            sum -= min;
        else
            cnt++;
    }

    cout << cnt << "\n";

    return 0;
}