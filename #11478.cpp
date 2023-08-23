// 서로 다른 부분 문자열의 개수
#include <iostream>
#include <set>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;

    set<string> s;
    
    string temp = "";

    for(int i = 0; i < str.size(); i++)
    {
        for(int j = i; j < str.size(); j++)
        {
            temp += str[j];
            s.insert(temp);
        }
        temp = "";
    }

    cout << s.size() << "\n";

    return 0;
}