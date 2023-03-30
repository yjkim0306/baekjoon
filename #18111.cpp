// 마인크래프트
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();

    int N, M, B;
    int minHeight = 256;
    int maxHeight = 0;
    int LTime = 1e9;
    int MHeight = 0;
    int block[500][500];
    cin >> N >> M >> B;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cin >> block[i][j];
            if(minHeight >= block[i][j]) minHeight = block[i][j];
            if(maxHeight <= block[i][j]) maxHeight = block[i][j];
        }
    }

    for(int h = minHeight; h <= maxHeight; h++)
    {
        int t = 0;
        int build = 0;
        int remove = 0;
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < M; j++)
            {
                int idx = h - block[i][j];
                if(idx < 0) remove += abs(idx);
                else build += idx;
            }
        }
        if(build <= remove + B)
        {
            t = build + remove * 2;
            if(t <= LTime)
            {
                LTime = t;
                MHeight = h;
            }
        }
    }
    cout << LTime << " " << MHeight << "\n";

    return 0;
}