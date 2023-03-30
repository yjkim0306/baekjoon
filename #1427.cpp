// 소트인사이드
#include <iostream>
#include <algorithm>

using namespace std;   
int main()
{
    int N, i = 0;
    int arr[11] = {0,};
    cin >> N;
    while(N != 0)
    {
        arr[i] = N%10;
        i++;
        N /= 10;
    }
    sort(arr, arr+i,greater<int>());

    for(int j = 0; j < i; j++)
    {
        cout << arr[j];
    }
    cout << endl;
    return 0;
}