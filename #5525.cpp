// IOIOI
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    string str;
    cin >> n >> m;

    cin >> str;
    
    int ans = 0;
    for(int i = 0; i < m; i++)
    {
        int k = 0;
        if(str[i] == 'O') 
            continue;
        else
        {
            while(str[i + 1] == 'O' && str[i + 2] == 'I')
            {
                k++;
                if(k == n)
                {
                    k--;
                    ans++;
                }
                i += 2;
            }
            k = 0;
        }
    }

    cout << ans << "\n";
    
    return 0;
}