// 공 바꾸기
#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    int arr[100] = {0, };
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        arr[i] = i;
    for(int idx = 0; idx < m; idx++)
    {
        int i, j;
        cin >> i >> j;
        swap(arr[i], arr[j]);
    }

    for(int i = 1; i <= n; i++)
        cout << arr[i] << " ";
    cout << "\n";
    
    return 0;
}