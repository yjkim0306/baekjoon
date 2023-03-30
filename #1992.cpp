// 쿼드 트리
#include <iostream>
#include <string>
using namespace std;

int n;
int map[64][64];

void recursion(int x, int y, int size)
{
    if(size == 1)
    {
        cout << map[x][y];
        return;
    }

    bool only0 = true;
    bool only1 = true;

    for(int i = x; i <  x + size; i++)
    {
        for(int j = y; j < y + size; j++)
        {
            if(map[i][j] == 1) only0 = false;
            if(map[i][j] == 0) only1 = false;
        }
    }

    if(only0) 
    {
        cout << 0;
        return;
    }

    if(only1)
    {
        cout << 1;
        return;
    }

    cout << "(";
    recursion(x, y, size / 2);
    recursion(x, y + size / 2, size / 2);
    recursion(x + size / 2, y, size / 2);
    recursion(x + size / 2, y + size / 2, size / 2);
    cout << ")";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        for(int j = 0; j < str.length(); j++) map[i][j] = str[j] - '0';
    }

    recursion(0, 0, n);
    cout << "\n";

    return 0;
}