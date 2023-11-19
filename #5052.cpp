// 전화번호 목록
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, n;
    cin >> t;

    while(t--)
    {
        cin >> n;
        vector<string> arr(n);

        for(int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        unordered_set<string> hash_set;
        bool flag = false;

        for(int i = 0; i < n; i++)
        {
            string str = "";
            for(int j = 0; j < arr[i].length() - 1; j++)
            {
                str += arr[i][j];
                if(hash_set.find(str) != hash_set.end())
                {
                    flag = true;
                    cout << "NO\n";
                    break;
                }
            }
            
            if(flag)
                break;
            hash_set.insert(arr[i]);
        }

        if(!flag)
            cout << "YES\n";
    }
    return 0;
}