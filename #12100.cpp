// 2048 (Easy)
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int n, ans;
int map[20][20];
int c_map[20][20];
int select[5];
bool visited[20][20];

void copy_map()
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            c_map[i][j] = map[i][j];
    }
}

void left()
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1; j++)
        {
            bool flag = false;
            if(c_map[i][j] == 0)
            {
                int k = j + 1;
                while(k <= n - 1)
                {
                    if(c_map[i][k] != 0)
                    {
                        flag = true;
                        break;
                    }
                    k++;
                }

                if(flag)
                {
                    c_map[i][j] = c_map[i][k];
                    c_map[i][k] = 0;
                }
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1; j++)
        {
            if(c_map[i][j] == c_map[i][j + 1])
            {
                c_map[i][j] = c_map[i][j] * 2;
                c_map[i][j + 1] = 0;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - 1; j++)
        {
            bool flag = false;
            if(c_map[i][j] == 0)
            {
                int k = j + 1;
                while(k <= n - 1)
                {
                    if(c_map[i][k] != 0)
                    {
                        flag = true;
                        break;
                    }
                    k++;
                }

                if(flag)
                {
                    c_map[i][j] = c_map[i][k];
                    c_map[i][k] = 0;
                }
            }
        }
    }
}

void right()
{
    for(int i = 0; i < n; i++)
    {
        for(int j = n - 1; j > 0; j--)
        {
            bool flag = false;
            if(c_map[i][j] == 0)
            {
                int k = j - 1;
                while(k >= 0)
                {
                    if(c_map[i][k] != 0)
                    {
                        flag = true;
                        break;
                    }
                    k--;
                }

                if(flag)
                {
                    c_map[i][j] = c_map[i][k];
                    c_map[i][k] = 0;
                }
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = n - 1; j > 0; j--)
        {
            if(c_map[i][j] == c_map[i][j - 1])
            {
                c_map[i][j] = c_map[i][j] * 2;
                c_map[i][j - 1] = 0;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = n - 1; j > 0; j--)
        {
            bool flag = false;
            if(c_map[i][j] == 0)
            {
                int k = j - 1;
                while(k >= 0)
                {
                    if(c_map[i][k] != 0)
                    {
                        flag = true;
                        break;
                    }
                    k--;
                }

                if(flag)
                {
                    c_map[i][j] = c_map[i][k];
                    c_map[i][k] = 0;
                }
            }
        }
    }
}

void up()
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n; j++)
        {
            bool flag = false;
            if(c_map[i][j] == 0)
            {
                int k = i + 1;
                while(k <= n - 1)
                {
                    if(c_map[k][j] != 0)
                    {
                        flag = true;
                        break;
                    }
                    k++;
                }

                if(flag)
                {
                    c_map[i][j] = c_map[k][j];
                    c_map[k][j] = 0;
                }
            }
        }
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(c_map[i][j] == c_map[i + 1][j])
            {
                c_map[i][j] = c_map[i][j] * 2;
                c_map[i + 1][j] = 0;
            }
        }
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n; j++)
        {
            bool flag = false;
            if(c_map[i][j] == 0)
            {
                int k = i + 1;
                while(k <= n - 1)
                {
                    if(c_map[k][j] != 0)
                    {
                        flag = true;
                        break;
                    }
                    k++;
                }

                if(flag)
                {
                    c_map[i][j] = c_map[k][j];
                    c_map[k][j] = 0;
                }
            }
        }
    }
}

void down()
{
    for(int i = n - 1; i > 0; i--)
    {
        for(int j = 0; j < n; j++)
        {
            bool flag = false;
            if(c_map[i][j] == 0)
            {
                int k = i - 1;
                while(k >= 0)
                {
                    if(c_map[k][j] != 0)
                    {
                        flag = true;
                        break;
                    }
                    k--;
                }

                if(flag)
                {
                    c_map[i][j] = c_map[k][j];
                    c_map[k][j] = 0;
                }
            }
        }
    }

    for(int i = n - 1; i > 0; i--)
    {
        for(int j = 0; j < n; j++)
        {
            if(c_map[i - 1][j] == c_map[i][j])
            {
                c_map[i][j] = c_map[i][j] * 2;
                c_map[i - 1][j] = 0;
            }
        }
    }

    for(int i = n - 1; i > 0; i--)
    {
        for(int j = 0; j < n; j++)
        {
            bool flag = false;
            if(c_map[i][j] == 0)
            {
                int k = i - 1;
                while(k >= 0)
                {
                    if(c_map[k][j] != 0)
                    {
                        flag = true;
                        break;
                    }
                    k--;
                }

                if(flag)
                {
                    c_map[i][j] = c_map[k][j];
                    c_map[k][j] = 0;
                }
            }
        }
    }
}

int find_max()
{
    int max = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(c_map[i][j] > max)
                max = c_map[i][j];
        }
    }
    
    return max;
}

void simulation()
{
    for(int i = 0; i < 5; i++)
    {
        int direction = select[i];
        switch(direction)
        {
            case 0:
                right();
                break;
            case 1:
                left();
                break;
            case 2:
                down();
                break;
            case 3:
                up();
                break;
        }
    }

    ans = max(ans, find_max());
}

void direction_select(int idx, int cnt)
{
    if(cnt == 5)
    {
        copy_map();
        simulation();
        return;
    }

    for(int i = 0; i < 4; i++)
    {
        select[cnt] = i;
        direction_select(i, cnt + 1);
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
            cin >> map[i][j];
    }

    direction_select(0, 0);
    cout << ans << "\n";
    
    return 0;
}