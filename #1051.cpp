// 숫자 정사각형
#include <iostream>
using namespace std;

int square[50][50];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, ans = 0;
    cin >> n >> m;
    string input;

    for(int i = 0; i < n; i++)
    {
        cin >> input;
        for(int j = 0; j < m; j++)
            square[i][j] = input[j] - '0';
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            int cnt = 0;
            for(int k = 1;; k++)
            {
                if((j + k) >= m || (i + k) >= n)
                    break;
                if(square[i][j] == square[i][j + k] && square[i][j] == square[i + k][j] && square[i][j] == square[i + k][j + k])
                    if(cnt < k)
                        cnt = k;
            }
            if((cnt + 1) > ans)
                ans = cnt + 1;
        }
    }
    cout << ans * ans << "\n";

    return 0;
}