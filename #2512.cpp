// 예산
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> budget;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        budget.push_back(input);
    }
    
    int total;
    cin >> total;
    
    sort(budget.begin(), budget.end());
    int start = 0, end = budget[n - 1], ans, sum;
    
    while(start <= end)
    {
        sum = 0;
        int mid = (start + end) / 2;
        for(int i = 0; i < n; i++)
            sum += min(budget[i], mid);
        
        if(total >= sum)
        {
            ans = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
    }

    cout << ans << "\n";
    
    return 0;
}