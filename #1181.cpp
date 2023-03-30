// 단어 정렬
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;
string str[20001];
int length_sort(string s1, string s2)
{
    if(s1.length() == s2.length())
    {
        return s1 < s2;
    }
    else
    {
        return s1.length() < s2.length();
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int N;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        cin >> str[i];
    }
    sort(str, str + N, length_sort);

    for(int i=0; i<N; i++)
    {
        if(str[i] == str[i+1]) continue;
        cout << str[i] << "\n";
    }
    return 0;
}