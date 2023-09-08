// LCS 2
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string str1, str2, res;
int dp[1001][1001];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
    cout.tie(NULL);

	string temp1, temp2;
	cin >> temp1;
	cin >> temp2;
	
	str1 = ' ' + temp1;
	str2 = ' ' + temp2;
	
	
	for(int i = 1; i < str2.size(); i++) 
    {
		for(int j = 1; j < str1.size(); j++) 
        {
			if(str1[j] == str2[i]) 
                dp[i][j] = dp[i - 1][j - 1] + 1;
			else
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}

	int col = str1.size() - 1;
	int row = str2.size() - 1;

	while(dp[row][col])
    {
		if(dp[row][col] == dp[row - 1][col])
            row--;
		else if (dp[row][col] == dp[row][col - 1])
            col--;
		else
        {
			res += str1[col];
			row--;
            col--;
		}
	}

	cout << dp[str2.size() - 1][str1.size() - 1] << "\n";
	if(res.size() > 0) 
    {
		reverse(res.begin(), res.end());
		cout << res << "\n";
	}

	return 0;
}