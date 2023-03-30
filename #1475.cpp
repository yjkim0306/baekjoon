// 방 번호
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[10] = {0,};
    while(1)
    {
        arr[n%10]++;
        if(n/10 == 0) break;
        n /= 10;
    }
    int idx = 0;
    for(int i = 0; i < 10; i++)
    {
        if(i != 6 && i != 9) idx = max(idx, arr[i]);
    }

    cout << max(idx, (arr[6] + arr[9] +1) / 2) << "\n"; 

    return 0;
}