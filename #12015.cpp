// 가장 긴 증가하는 부분 수열 2
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int arr[1000001];
vector<int> sequence;
int n;

void binary_search(int num)
{
    int low = 0, high = sequence.size() - 1, mid;
    int ret = 1000000007;
    while(low <= high)
    {
        mid = (low + high) / 2;
        int idx = sequence[mid];
        if(idx >= num)
        {
            if(ret > mid)
                ret = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }

    sequence[ret] = num;
}

void find()
{
    sequence.push_back(arr[0]);
    for(int i = 1; i < n; i++)
    {
        if(sequence.back() < arr[i])
            sequence.push_back(arr[i]);
        else 
            binary_search(arr[i]);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    find();

    cout << sequence.size() << "\n";

    return 0;
}