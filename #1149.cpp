// RGB거리
#include <iostream>
#include <algorithm>
using namespace std;

int house[1001][3];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    house[0][0] = 0;
    house[0][1] = 0;
    house[0][2] = 0;
    int cost[3];
    for(int i = 1; i <= n; i++)
    {
        cin >> cost[0] >> cost[1] >> cost[2];
        house[i][0] = min(house[i-1][1], house[i-1][2]) + cost[0];
        house[i][1] = min(house[i-1][2], house[i-1][0]) + cost[1];
        house[i][2] = min(house[i-1][1], house[i-1][0]) + cost[2];
    }
    cout << min(house[n][2], min(house[n][1], house[n][0])) << "\n";

    return 0;
}