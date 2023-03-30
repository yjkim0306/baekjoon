// 대표값2
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int arr[5]; // 5개의 자연수
    int sum = 0; // 합
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        sum += arr[i]; // 합에 더해줌
    }
    sort(arr, arr+5); // 오름차순으로 정렬
    cout << sum / 5 << "\n"; // 합을 5로 나눔
    cout << arr[2] << "\n"; // 2번째 인덱스가 항상 중앙값이므로
    return 0;
}