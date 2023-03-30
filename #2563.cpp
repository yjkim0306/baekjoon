// 색종이
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n; // 색종이의 수
    int x, y; // 색종이 좌표
    int arr[100][100] = {0,}; // 색종이
    cin >> n;
    int res = 0; // 영역의 넓이
    for(int i = 0; i < n; i++)
    {
        cin >> x >> y;
        for(int j = x; j < x + 10; j++)
        {
            for(int k = y; k < y + 10; k++)
            {
                arr[j][k] = 1;
            }
        }
    }
    for(int i = 0; i < 100; i++)
    {
        for(int j = 0; j < 100; j++)
        {
            if(arr[i][j] == 1) res++;
        }
    }
    cout << res << "\n";
    
    return 0;
}