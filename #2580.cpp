// 스도쿠
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int board[9][9];
vector<pair<int, int> > v;
int cnt = 0;
bool complete = false;

bool check(pair<int, int> p)
{
    int x = p.first / 3;
    int y = p.second / 3;
    for(int i = 0; i < 9; i++)
    {
        if(board[p.first][i] == board[p.first][p.second] && i != p.second)
            return false;
        if(board[i][p.second] == board[p.first][p.second] && i != p.first)
            return false;
    }
    for(int i = 3 * x; i < 3 * x + 3; i++)
    {
        for(int j = 3 * y; j < 3 * y + 3; j++)
        {
            if(board[i][j] == board[p.first][p.second])
            {
                if(i != p.first && j != p.second)
                    return false;
            }
        }
    }
    return true;
}

void sudoku(int n)
{
    if(n == cnt)
    {
        for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 9; j++)
                cout << board[i][j] << " ";
            cout << "\n";
        }
        complete = true;
        return;
    }

    for(int i = 1; i <= 9; i++)
    {
        board[v[n].first][v[n].second] = i;

        if(check(v[n]))
            sudoku(n + 1);
        if(complete)
            return;
    }

    board[v[n].first][v[n].second] = 0;

    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    pair<int, int> p;
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            cin >> board[i][j];
            if(board[i][j] == 0)
            {
                cnt++;
                p.first = i;
                p.second = j;
                v.push_back(p);
            }
        }
    }
    sudoku(0);

    return 0;
}