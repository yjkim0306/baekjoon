// N과 M (12)
#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int arr[10], num[10];

void func(int cnt, int idx)
{
    if(idx == m)
    {
        for(int i = 0; i < m; i++)
            cout << arr[i] << " ";
        cout << "\n";
        return;
    }

    int temp = 0;

    for(int i = cnt; i < n; i++)
    {
        if(num[i] != temp)
        {
            arr[idx] = num[i];
            temp = arr[idx];
            func(i, idx + 1);
        }
    }

    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> num[i];

    sort(num, num + n);

    func(0, 0); 
    
    return 0;
}