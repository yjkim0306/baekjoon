// 점수계산
#include <iostream>
using namespace std;

int arr[101];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, bonus = 1, ans = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {        
        cin >> arr[i];
        if(arr[i] == 1)
        {
            ans += bonus;
            bonus++;
        }
        else
        {
            bonus = 1;
        }
    }

    cout << ans << "\n";

    return 0;
}