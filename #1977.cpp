// 완전제곱수
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int m, n, cnt = 0, sum = 0, min = 10001;
    cin >> m >> n;
    
    for(int i = 1; i <= 100; i++)
    {
        if(i * i >= m && i * i <= n)
        {
            sum += i * i;
            cnt++;
        }
        if(i * i >= m && i * i <= n && min > i * i)
        {
            min = i * i;
        }
    }

    if(cnt == 0)
        cout << "-1\n";
    else
        cout << sum << "\n" << min << "\n"; 
        
    return 0;
}