// 수 정렬하기 4
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr, arr + n, greater<int>()); // 내림차순 정렬
    
    for(int i = 0; i < n; i++)
        cout << arr[i] << "\n";

    return 0;
}