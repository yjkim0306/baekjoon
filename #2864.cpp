// 5와 6의 차이
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int maxans, minans;
    string a, b;
    cin >> a >> b;
    
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] == '5')
            a[i] = '6';
    }

    for(int i = 0; i < b.size(); i++)
    {
        if(b[i] == '5')
            b[i] = '6';
    }

    maxans = stoi(a) + stoi(b);

    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] == '6')
            a[i] = '5';
    }

    for(int i = 0; i < b.size(); i++)
    {
        if(b[i] == '6')
            b[i] = '5';
    }

    minans = stoi(a) + stoi(b);

    cout << minans << " " << maxans << "\n";
    
    return 0;
}