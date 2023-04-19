// 10부제
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, cnt = 0;
    cin >> n;

    int arr[5];
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        if(arr[i] == n)
            cnt++;
    }

    cout << cnt << "\n";

    return 0;
}