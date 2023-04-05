// 팰린드롬인지 확인하기
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	string s;
	cin >> s;

	for (int i = 0; i < s.length() / 2; ++i)
    {
        if (s[i] != s[s.length() - i - 1]) // 앞에서부터 i번째랑 뒤에서부터 i번째 문자가 같은지 확인
        {
			cout << "0\n"; // 다르면 팰린드롬이 아님
			return 0;
		}
	}
 
	cout << "1\n";

	return 0;
}