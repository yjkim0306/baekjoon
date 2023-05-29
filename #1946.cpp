// 신입 사원
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, cnt = 1, temp = 0;
        vector<pair <int, int> > v;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            v.push_back(make_pair(a, b));
        }

        sort(v.begin(), v.end());
        
        for(int i = 1; i < n; i++)
        {
            if(v[temp].second > v[i].second)
            {
                cnt++;
                temp = i;
            }
        }

        cout << cnt << "\n";
    }
    return 0;
}