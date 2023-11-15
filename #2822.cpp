// 점수 계산
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<pair <int, int> > v(8);

    for(int i = 0; i < 8; i++)
    {
        cin >> v[i].first;
        v[i].second = i + 1;
    }

    sort(v.begin(), v.end(), greater<pair <int, int> >());

    int sum = 0; 
    vector<int> idx;

    for(int i = 0; i < 5; i++)
    {
        sum += v[i].first;
        idx.push_back(v[i].second);
    }

    cout << sum << "\n";

    sort(idx.begin(), idx.end());

    for(int i = 0; i < idx.size(); i++)
        cout << idx[i] << " ";
    cout << "\n";

    return 0;
}