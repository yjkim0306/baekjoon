// 날짜 계산
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();

    int E, S, M;
    cin >> E >> S >> M;
    int year = 1;
    while(1)
    {
        if((year - E) % 15 == 0 && (year - S) % 28 == 0 && (year - M) % 19 == 0)
        {
            cout << year << "\n";
            break;
        }
        else year++;
    }
    return 0;
}