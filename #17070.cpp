// 파이프 옮기기 1
#include <iostream>
using namespace std;

int n;
bool map[16][16]; // true = 벽, false = 빈칸
int ans[16][16][3]; // 행, 열, 파이프 방향

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cin >> map[i][j];
    }

    ans[0][1][0] = 1;
    for(int i = 2; i < n; i++) // (0, 2)부터 (0, n - 1)까지 체크
    {
        if(!map[0][i]) 
            ans[0][i][0] = ans[0][i - 1][0]; 
    }

    for(int i = 1; i < n; i++) // 1행부터
    {
        for(int j = 2; j < n; j++) // 2열부터
        {
            if(!map[i][j]) // 빈칸이면
            {
                ans[i][j][0] = ans[i][j - 1][0] + ans[i][j - 1][1];
                ans[i][j][2] = ans[i - 1][j][1] + ans[i - 1][j][2];
                if(!map[i - 1][j] && !map[i][j - 1]) // 대각선 방향으로 밀 때에는 (i - 1, j), (i, j - 1)도 빈칸이어야 한다.
                    ans[i][j][1] = ans[i - 1][j - 1][0] + ans[i - 1][j - 1][1] + ans[i - 1][j - 1][2];
            }
        }
    }

    cout << ans[n - 1][n - 1][0] + ans[n - 1][n - 1][1] + ans[n - 1][n - 1][2] << "\n";

    return 0;
}