// 종이의 개수
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;
int graph[2187][2187];
int res[3];

bool check(int x, int y, int num)
{
    int start = graph[x][y];
    for(int i = x; i < x + num; i++)
    {
        for(int j = y; j < y + num; j++)
        {
            if(start != graph[i][j])
                return false;
        }
    }

    return true;
}

void recursion(int x, int y, int num)
{
    if(check(x, y, num))
        res[graph[x][y]]++;
    else
    {
        int size = num / 3;
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0 ; j < 3; j++)
                recursion(x + size * i, y + size * j, size);
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
        {   
            int input;
            cin >> input;
            input++;
            graph[i][j] = input;
        }
    }

    recursion(0, 0, n);

    cout << res[0] << "\n" << res[1] << "\n" << res[2] << "\n";

    return 0;
}