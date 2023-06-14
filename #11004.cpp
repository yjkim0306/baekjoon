// K번째 수
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    vector<int> v;
    cin >> n >> k;

    for(int i = 1; i <= n; i++)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }
    
    sort(v.begin(), v.end());
    cout << v[k - 1] << "\n";

    return 0;
}