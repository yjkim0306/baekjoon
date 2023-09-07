// 사탕 게임
#include <iostream>
using namespace std;

int n, ans;
char arr[50][50];

void check()
{
    for(int i = 0; i < n; i++)
    {
        int cnt = 1;
        for(int j = 0; j < n; j++)
        {
            if(arr[i][j] == arr[i][j + 1])
                cnt++;
            else
            {
                if(ans < cnt) 
                    ans = cnt;
                cnt = 1;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        int cnt = 1;
        for(int j = 0; j < n; j++)
        {
            if(arr[j][i] == arr[j + 1][i])
                cnt++;
            else
            {
                if(ans < cnt) 
                    ans = cnt;
                cnt = 1;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1; j++)
        {
            swap(arr[i][j], arr[i][j + 1]);
            check();
            swap(arr[i][j], arr[i][j + 1]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1; j++)
        {
            swap(arr[j][i], arr[j + 1][i]);
            check();
            swap(arr[j][i], arr[j + 1][i]);
        }
    }

    cout << ans << "\n";

    return 0;
}