// 아카라카
#include <iostream>
using namespace std;

string s;

bool rec(string x) { // 문자열 x가 아카라카 팰린드롬이면 true를 리턴
	if (x.size() == 1) 
        return true;

	string l, r;
	long long tmp = x.size() / 2;

	for (long long i = 0; i < tmp; i++) 
    {
		l += x[i];
	}

	for (long long i = 0; i < x.size() / 2; i++) 
    {
		if (x.size() % 2 == 1) r += x[i + x.size() / 2 + 1];
		else r += x[i + x.size() / 2];
	}

	if (l != r) 
        return false;
	if (rec(l) && rec(r)) 
        return true;
	else 
        return false;
}

int main() {
	ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

	cin >> s;

	if (rec(s)) 
        cout << "AKARAKA\n";
	else 
        cout << "IPSELENTI\n";

	return 0;
}