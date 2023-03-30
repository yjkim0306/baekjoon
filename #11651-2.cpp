// 좌표 정렬하기 2
#include <iostream>
#include <algorithm>

using namespace std;
struct A{
    int x, y;
}; 

bool compare(const A& p1, const A& p2)
{
    if(p1.y == p2.y) 
    {
        return p1.x < p2.x;
    }
    else return p1.y < p2.y;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    A N[100005];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> N[i].x >> N[i].y;
    }    
    sort(N, N + n, compare);
    for(int i = 0; i < n; i++)
    {
        cout << N[i].x << " " << N[i].y << "\n";
    }
    return 0;
}