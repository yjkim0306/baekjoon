// 나무 재테크
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, k;
int energy[11][11];
int insert_energy[11][11];
vector<int> v[11][11];

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void ss()
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(v[i][j].size() == 0)
                continue;
            int dead_tree = 0;
            vector<int> temp;

            sort(v[i][j].begin(), v[i][j].end());
            for(int k = 0; k < v[i][j].size(); k++)
            {
                int age = v[i][j][k];
                if(energy[i][j] >= age)
                {
                    energy[i][j] = energy[i][j] - age;
                    temp.push_back(age + 1);
                }
                else
                    dead_tree += (age / 2);
            }

            v[i][j].clear();
            for(int k = 0; k < temp.size(); k++)
                v[i][j].push_back(temp[k]);
            energy[i][j] += dead_tree;
        }
    }
}

void fall()
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(v[i][j].size() == 0)
                continue;
            for(int k = 0; k < v[i][j].size(); k++)
            {
                int age = v[i][j][k];

                if(age % 5 == 0)
                {
                    for(int l = 0; l < 8; l++)
                    {
                        int nx = i + dx[l];
                        int ny = j + dy[l];
                        if(nx >= 1 && ny >= 1 && nx <= n && ny <= n)
                            v[nx][ny].push_back(1);
                    }
                }
            }
        }
    }
}

void winter()
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <=n; j++)
            energy[i][j] += insert_energy[i][j];
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m >> k;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> insert_energy[i][j];
            energy[i][j] = 5;
        }
    }

    for(int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a][b].push_back(c);
    }

    for(int i = 0; i < k; i++)
    {
        ss();
        fall();
        winter();
    }

    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
            ans += v[i][j].size();
    }
    
    cout << ans << "\n";

    return 0;
}