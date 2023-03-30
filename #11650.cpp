// 좌표 정렬하기
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<pair <int, int> > v;
int main()
{
    int N; // 점의 개수
    cin >> N;
    int x,y; // 좌표
    for(int i = 0; i < N; i++)
    {
        cin >> x >> y;
        v.push_back(pair<int, int> (x, y));
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < N; i++)
    {
        cout << v[i].first << " " << v[i].second << "\n";
    }
    
    return 0;
}