// 수 정렬하기 3
#include <iostream>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int N;
    cin >> N;
    int arr[10001] = {0};
    for(int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        arr[a] += 1;
    }
    for(int i = 0; i <= 10000; i++)
    {
        for(int j = 0; j < arr[i]; j++)
        {
            cout << i << "\n";
        }
    }
    
    return 0;
}