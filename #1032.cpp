// 명령 프롬프트
#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    string ans;
    cin >> ans;
    
    for(int i = 0; i < n - 1; i++)
    {
        string input;
        cin >> input;
        for(int j = 0; j < input.length(); j++)
        {
            if(ans[j] != input[j]) 
                ans[j] = '?';
            else
                continue;
        }
    }

    cout << ans << "\n";

    return 0;
}