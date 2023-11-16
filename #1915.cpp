// 가장 큰 정사각형
#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int map[1001][1001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for(int i = 1; i <= n; i++)
    {
        string str;
        cin >> str;

        for(int j = 0; j < str.length(); j++)
            map[i][j + 1] = str[j] - '0';
    }

    int max_length = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(map[i][j] != 0)
            {
                map[i][j] = min(map[i - 1][j - 1], min(map[i - 1][j], map[i][j - 1])) + 1;
                if(max_length < map[i][j])
                    max_length = map[i][j];
            }
        }
    }

    cout << max_length * max_length << "\n";

    return 0;
}