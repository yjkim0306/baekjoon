// 수 정렬하기 2
#include <iostream>
#include <algorithm>

using namespace std;
int arr[1000000];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie();
    int N;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    
    sort(arr, arr + N); // sort 함수

    for(int i = 0; i < N; i++)
    {
        cout << arr[i] << "\n";
    }

    return 0;
}