// 신나는 함수 실행
#include <iostream>
using namespace std;

int arr[21][21][21];

int solve(int a, int b, int c)
{
    if(a <= 0 || b <= 0 || c <= 0)
        return 1;
    if(a > 20 || b > 20 || c > 20)
        return solve(20, 20, 20);
    if(arr[a][b][c])
        return arr[a][b][c];
    if(a < b && b < c)
    {
        arr[a][b][c] = solve(a, b, c - 1) + solve(a, b - 1, c - 1) - solve(a, b - 1, c);
        return arr[a][b][c];
    }
    arr[a][b][c] = solve(a - 1, b, c) + solve(a - 1, b - 1, c) + solve(a - 1, b, c - 1) - solve(a - 1, b - 1, c - 1);
    return arr[a][b][c];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;
    while(1)
    {
        cin >> a >> b >> c;
        if(a == -1 && b == -1 && c == -1)
            break;
        cout << "w(" << a << ", " << b << ", " << c << ") = " << solve(a, b, c) << "\n";
    }
    return 0;
}