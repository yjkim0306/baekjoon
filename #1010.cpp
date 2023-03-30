// 다리 놓기
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int T, N, M, cnt, temp;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        cnt = 1;
        temp = 1;
        cin >> N >> M;
        for(int j = M; j > M-N; j--)
        {
            cnt *= j;
            cnt /= temp++;
        }
        cout << cnt << "\n";
    }

    return 0;
}