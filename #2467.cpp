// 용액
#include <iostream>
#include <cmath>
using namespace std;

long long arr[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int left = 0, right = n - 1;
    int res = abs(arr[left] + arr[right]);
    int res1 = arr[left], res2 = arr[right];

    while(left < right)
    {
        int temp = arr[left] + arr[right];
        if(abs(temp) < res)
        {
            res = abs(temp);
            res1 = arr[left];
            res2 = arr[right];
        }

        if(temp < 0)
            left++;
        else
            right--;
    }

    cout << res1 << " " << res2 << "\n";

    return 0;
}