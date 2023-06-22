// 바구니 뒤집기
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    int arr[100];
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        arr[i] = i;
        
    while(m--)
    {
        int i, j;
        cin >> i >> j;
        for(int idx = 0; idx <= (j - i) / 2; idx++)
            swap(arr[i + idx], arr[j - idx]);
    }
    
    for(int i = 1; i <= n; i++)
        cout << arr[i] << " ";
    cout << "\n";

    return 0;
}