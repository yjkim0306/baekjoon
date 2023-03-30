// N-Queen
#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int n, ans;
vector<pair<int, int>> queen;

bool is_valid(int r, int c)
{
    for(int i = 0; i < int(queen.size()); i++)
    {
        int nr = queen[i].first, nc = queen[i].second;
        if(nr == r || nc == c) return false;
        if(nr + nc == r + c || nr - nc == r - c) return false;
    }

    return true;
}

void solve(int r)
{
    if(r == n)
    {
        ans++;
        return;
    }
    for(int c = 0; c < n; c++)
    {
        if(!is_valid(r, c)) continue;
        queen.push_back({r,c});
        solve(r + 1);
        queen.pop_back();
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n;

    solve(0);
    
    cout << ans << "\n";
    
    return 0;
}