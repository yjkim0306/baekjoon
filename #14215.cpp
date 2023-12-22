// 세 막대
#include <iostream>
#include <algorithm>
using namespace std;

int arr[3];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> arr[0] >> arr[1] >> arr[2];

    sort(arr, arr + 3);
    if(arr[0] + arr[1] > arr[2])    
        cout << arr[0] + arr[1] + arr[2] << "\n";
    else
        cout << (arr[0] + arr[1]) * 2 - 1 << "\n";
        
    return 0;
}