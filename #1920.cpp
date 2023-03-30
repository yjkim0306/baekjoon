// 수 찾기
#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int arr[100010];

void binarySearch(int value)
{
    int left = 0;
    int right = n - 1;
    while(left <= right)
    {
        int mid = (left + right) / 2;
        if(value > arr[mid]) left = mid + 1;
        else if(value < arr[mid]) right = mid - 1;
        else 
        {
            cout << "1\n";
            return;
        }
    }
    cout << "0\n";
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    int temp;
    for(int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    } 
    sort(arr, arr + n);
    cin >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> temp;
        binarySearch(temp);
    }

    return 0;
}