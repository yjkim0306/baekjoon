// 쉽게 푸는 문제
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a, b;
    cin >> a >> b;
    int arr[1000];
    int cnt = 0, sum = 0;

    for(int i = 1; i < 1000; i++)
    {
        for(int j = 0; j < i && cnt < 1000; j++)
            arr[cnt++] = i;
    }

    for(int i = a - 1; i < b; i++)
        sum += arr[i];

    cout << sum << "\n";

    return 0;
}