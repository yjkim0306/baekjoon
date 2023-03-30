// 분해합
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int N, res = 0;
    int h_thousandth, t_thousandth, thousandth, hundredth, tenth, ones;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        h_thousandth = i % 1000000 / 100000;
        t_thousandth = i % 100000 / 10000;
        thousandth = i % 10000 / 1000;
        hundredth = i % 1000 / 100;
        tenth = i % 100 / 10;
        ones = i % 10;
        if(i + h_thousandth + t_thousandth + thousandth + hundredth + tenth + ones == N)
        {
            res = i;
            break;
        }
    }
    cout << res << "\n";
}