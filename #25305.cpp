// 커트라인
#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int N, k;
    int arr[1001] = {0,};
    cin >> N >> k;
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + N);
    
    cout << arr[N-k] << "\n";

    return 0;
}