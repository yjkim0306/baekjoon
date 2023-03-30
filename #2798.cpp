// 블랙잭
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int N, M;
    int ans = 0;
    cin >> N >> M;
    int arr[100] = {0,};
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < N-2; i++)
    {
        for(int j = i+1; j < N-1; j++)
        {
            for(int k = j+1; k < N; k++)
            {
                int tot = arr[i] + arr[j] + arr[k];
                if(tot <= M && M - tot < M - ans)
                {
                    ans = tot;
                }
            }
        }
    }
    cout << ans << "\n";

    return 0;
}