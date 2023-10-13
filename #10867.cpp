// 중복 빼고 정렬하기
#include <iostream>
#include <algorithm>
using namespace std;

int arr[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, temp = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr, arr + n);
    
    for(int i = 0; i < n; i++)
    {
        if(temp == arr[i])
            continue;
        
        cout << arr[i] << " ";
        temp = arr[i];
    }
    return 0;
}