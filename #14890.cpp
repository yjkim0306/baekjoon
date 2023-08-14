// 경사로
#include <iostream>
#include <cmath>
using namespace std;

int road1[101][101];
int road2[101][101];
int n, l, res = 0;

void check(int road[][101])
{
    // 가로 확인
    for(int i = 0; i < n; i++)
    {
        bool visited[101] = {0,}; // 경사로 여부
        bool flag = true; // 가능한 길인지 확인
        for(int j = 0; j < n - 1; j++)
        {
            if(abs(road[i][j] - road[i][j + 1]) > 1) // 높이차가 1보다 크면 불가능한 길
            {
                flag = false;
                break;
            }

            if(road[i][j] == road[i][j + 1] + 1) // 경사로를 위에서 아래로 설치할 때
            {
                int cur_height = road[i][j + 1];
                for(int k = j + 2; k < j + 1 + l; k++)
                {
                    if(k >= n || road[i][k] != cur_height) // l만큼의 여유가 있는지 확인
                    {
                        flag = false; 
                        break;
                    }
                }
                if(flag)
                {
                    // 경사로 설치하면 설치했다고 표시
                    visited[j + l] = true;
                }
                else
                    break;
            }
            
            // 경사로를 아래에서 위로 설치할 때
            if(road[i][j] == road[i][j + 1] - 1)
            {
                int cur_height = road[i][j];
                for(int k = j; k > j - l; k--)
                {
                    if(k < 0 || road[i][k] != cur_height || visited[k])
                    {
                        // l만큼의 여유와 경사로 설치 여부 확인
                        flag = false;
                        break;
                    }
                }
                if(!flag)
                    break;
            }
        }
        if(flag)
            res++; // 길이면 카운트
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> l;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> road1[i][j];
            road2[j][i] = road1[i][j];
        }
    }

    check(road1);
    check(road2);
    cout << res << "\n";

    return 0;
}