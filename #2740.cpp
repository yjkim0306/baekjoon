// 행렬 곱셈
#include <iostream>
using namespace std;

int arr1[100][100];
int arr2[100][100];
int res[100][100];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, k;
    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            cin >> arr1[i][j];
    }

    cin >> m >> k;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < k; j++)
            cin >> arr2[i][j];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < k; j++)
        {
            for(int l = 0; l < m; l++)
            {
                res[i][j] += arr1[i][l] * arr2[l][j];
            }
            cout << res[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}