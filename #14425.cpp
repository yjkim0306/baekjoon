// 문자열 집합
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int N, M, cnt = 0; 
    map<string, bool> m;
    string str;
    cin >> N >> M;
    for(int i = 0; i < N; i++)
    {   
        cin >> str;
        m[str] = true;
    }
    for(int i = 0; i < M; i++)
    {
        cin >> str;
        if(m[str]) cnt++;
    }
    cout << cnt << "\n";

    return 0;
}