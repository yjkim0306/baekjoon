// 행렬 제곱
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long n, b;
long long a[5][5], temp[5][5], ans[5][5];

void printMatrix(long long mat[5][5])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << mat[i][j] << " ";
        cout << "\n";
    }
}

void matrix_mult(long long x[5][5], long long y[5][5])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            temp[i][j] = 0;
            for(int k = 0; k < n; k++)
                temp[i][j] += (x[i][k] * y[k][j]);
            temp[i][j] %= 1000;
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            x[i][j] = temp[i][j];
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> b;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
        ans[i][i] = 1;
    }

    while(b > 0)
    {
        if(b % 2 == 1)
            matrix_mult(ans, a);
        matrix_mult(a, a);
        b /= 2;
    }

    printMatrix(ans);
    
    return 0;
}