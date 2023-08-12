// 별 찍기 - 11
#include <iostream>
using namespace std;

char arr[3072][6143];

void draw(int row, int col)
{
    // 첫 번째 줄 (꼭짓점에 * 1개)
    arr[row][col] = '*';

    // 두 번째 줄 (* 2개)
    arr[row + 1][col - 1] = '*';
    arr[row + 1][col + 1] = '*';

    // 세 번째 줄 (* 5개)
    for(int i = 0; i < 5; i++)
        arr[row + 2][col - 2 + i] = '*';
}

void triangle(int len, int row, int col)
{
    if(len == 3)
    {
        draw(row, col);
        return;
    }

    triangle(len / 2, row, col); // 첫 번째 삼각형의 꼭짓점
    triangle(len / 2, row + len / 2, col - len / 2); // 두 번째 삼각형의 꼭짓점
    triangle(len / 2, row + len / 2, col + len / 2); // 세 번째 삼각형의 꼭짓점   
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 2 * n - 1; j++)
            arr[i][j] = ' ';
    }

    triangle(n, 0, n - 1); // 별 찍기

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 2 * n - 1; j++)
            cout << arr[i][j];
        cout << "\n";
    }
    
    return 0;
}