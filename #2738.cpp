// 행렬 덧셈
#include <iostream>
using namespace std;
int array1[100][100];
int array2[100][100];
int result[100][100];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int N, M;
    cin >> N >> M;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cin >> array1[i][j];
        }
    }
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cin >> array2[i][j];
        }
    }
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            result[i][j] = array1[i][j] + array2[i][j];
        }
    }
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}