// 약수
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int N, a, b; //구하고자 하는 수, 최댓값을 저장할 변수, 최솟값을 저장할 변수
    int arr[50] = {0,};
    int num; 
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < num; i++)
    {
        a = *max_element(arr, arr+num);
        b = *min_element(arr, arr+num);
    }
    N = a * b;
    cout << N << "\n";

    return 0;
}