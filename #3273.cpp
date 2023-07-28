// 두 수의 합
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x, res = 0;
    vector<int> v;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }

    cin >> x;
    sort(v.begin(), v.end());

    int l = 0, r = n - 1;
    while(l < r)
    {
        if(v[l] + v[r] == x)
        {
            res++;
            l++;
            r--;
        }
        else if(v[l] + v[r] < x)
            l++;
        else
            r--;
    }

    cout << res << "\n";

    return 0;
}