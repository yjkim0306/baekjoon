// 음계
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[8];
    int ascending = 0;
    int descending = 0;
    for(int i = 0; i < 8; i++)
    {
        cin >> arr[i];
        if(arr[i] == i+1) ascending++;
        else if(arr[i] == 8-i) descending++;
    }

    if(ascending == 8) cout << "ascending\n";
    else if(descending == 8) cout << "descending\n";
    else cout << "mixed\n";

    return 0;
}