// 최소, 최대
#include <iostream>
using namespace std;

int arr[1000001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = 0, min = 0;
    for(int i = 0; i < n; i++)
    {
        min = arr[i] < min ? arr[i] : min;
        max = arr[i] > max ? arr[i] : max;
    }

    cout << min << " " << max << "\n";

    return 0;
}