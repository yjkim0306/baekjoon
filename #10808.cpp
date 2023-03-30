// 알파벳 개수
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string str;
    cin >> str;
    int arr[26] = {0,};
    for(int i = 0; i < str.size(); i++)
    {
        arr[str[i] - 97] += 1;
    }
    for(int i = 0; i < 26; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}