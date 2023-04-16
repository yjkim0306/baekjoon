// 집합의 표현
#include <iostream>
#include <vector>
using namespace std;

int n, m;
int parent[1000001];

int getParent(int x)
{
    if(parent[x] == x) 
        return x;
    return parent[x] = getParent(parent[x]);
}

void unionParent(int a, int b)
{
    a = getParent(a);
    b = getParent(b);
    if(a > b)
        parent[a] = b;
    else
        parent[b] = a;
}

void findParent(int a, int b)
{
    a = getParent(a);
    b = getParent(b);
    if(a == b)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        parent[i] = i;

    for(int i = 0; i < m; i++)
    {
        int boolean, a, b;
        cin >> boolean >> a >> b;
        if(!boolean)
            unionParent(a, b);
        else
            findParent(a, b);
    }

    return 0;
}