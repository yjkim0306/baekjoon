// 비밀번호 찾기
#include <iostream>
#include <map>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    map<string, string> store;
    cin >> n >> m;

    while(n--)
    {
        string website, password;
        cin >> website >> password;

        store[website] = password;
    }

    while(m--)
    {
        string input;
        cin >> input;

        cout << store[input] << "\n";
    }

    return 0;
}