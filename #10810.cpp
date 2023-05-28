// 공 넣기
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    int arr[101] = {0,};

    cin >> n >> m;
    for(int idx = 0; idx < m; idx++)
    {
        int i, j, k;
        cin >> i >> j >> k;
        for(int a = i; a <= j; a++)
            arr[a] = k;
    }

    for(int i = 1; i <= n; i++)
        cout << arr[i] << " ";
    cout << "\n";
    
    return 0;
}