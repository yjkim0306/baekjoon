// 골드바흐의 추측
#include <iostream>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    int res[10001] = {0,};
    res[1] = 1;
    for(int i = 2; i <= 10000; i++)
    {
        if(res[i] == 1) continue;
        for(int j = 2*i; j <= 10000; j += i)
        {
            res[j] = 1;
        }
    }
    
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        int n;
        cin >> n;
        for(int j = n/2; j >= 2; j--){
            if(res[j] == 1 || res[n-j] == 1) continue;
            cout << j << " " << n-j << "\n";
            break;
        }
    }
    return 0;
}