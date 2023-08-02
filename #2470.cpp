// 두 용액
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;
vector<int> arr;
vector<int> ans(2);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    arr.resize(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr.begin(), arr.end());

    int start = 0;
    int end = n - 1;
    int min = 2e9;

    while(start < end)
    {
        int sum = arr[start] + arr[end];

        if(min > abs(sum))
        {
            min = abs(sum);
            ans[0] = arr[start];
            ans[1] = arr[end];

            if(sum == 0)
                break;
        }

        if(sum < 0)
            start++;
        else
            end--;
    }

    cout << ans[0] << " " << ans[1] << "\n";

    return 0;
}