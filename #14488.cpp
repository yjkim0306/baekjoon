// 준오는 급식충이야!!
#include <iostream>
#include <algorithm>
using namespace std;

const double maximum = 1e18;
const double E = 1e-08;
int v[50050];
int x[50050];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    double t;
    double left = -maximum;
    double right = maximum;
    cin >> n >> t;

    for(int i = 0; i < n; i++) cin >> x[i];
    for(int i = 0; i < n; i++) cin >> v[i];
    for(int i = 0; i < n; i++)
    {
        left = max((double)left, x[i] - v[i] * t);
        right = min((double)right, x[i] + v[i] * t);
    }

    if(left < right + E) cout << "1\n";
    else cout << "0\n";

    return 0;
}