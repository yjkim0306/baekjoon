// 듣보잡
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n, m; // 듣도 못한 사람의 수, 보도 못한 사람의 수
    cin >> n >> m;
    string name; // 입력받을 이름들
    vector<string> v;
    vector<string> res;
    for(int i = 0; i < n; i++)
    {
        cin >> name;
        v.push_back(name);
    }
    sort(v.begin(), v.end()); 
    for(int i = 0; i < m; i++)
    {
        cin >> name;
        if(binary_search(v.begin(), v.end(), name)) // 이분탐색
        {
            res.push_back(name); // 찾으면 res에 추가
        }
    }
    sort(res.begin(), res.end());
    cout << res.size() << endl;
    for(int i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }
    return 0;
}