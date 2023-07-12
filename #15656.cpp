// N과 M (7)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int arr[9];
vector<int> v;

void func(int idx)
{
    if(idx == m)
    {
        for(int i = 0; i < idx; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
    else
    {
        for(int i = 0; i < v.size(); i++)
        {
            arr[idx] = v[i];
            func(idx+1);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    while(n--)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());
    func(0);
    
    return 0;
}