// 하얀 칸
#include <iostream>
using namespace std;
char map[8][8];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int cnt = 0;
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            cin >> map[i][j];
            if(map[i][j] == 'F' && (i + j) % 2 == 0)
                cnt++;
        }
    }

    cout << cnt << "\n";
    
    return 0;
}