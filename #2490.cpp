// 윷놀이
#include <iostream>
using namespace std;

int arr[4];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i = 0; i < 3; i++)
    {
        int cnt0 = 0;
        int cnt1 = 0;
        for(int j = 0; j < 4; j++) 
        {
            cin >> arr[j];
            if(arr[j] == 0) cnt0++;
            else cnt1++;
        }
        if(cnt0 == 1) cout << "A\n";
        if(cnt0 == 2) cout << "B\n";
        if(cnt0 == 3) cout << "C\n";
        if(cnt0 == 4) cout << "D\n";
        if(cnt1 == 4) cout << "E\n";
    }

    return 0;
}