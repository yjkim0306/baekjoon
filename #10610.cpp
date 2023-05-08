// 30
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string n;
    cin >> n;
    sort(n.begin(), n.end(), greater<>());

    if(n[n.length() - 1] != '0')
        cout << "-1\n";
    else
    {
        long long sum = 0;
        for(auto o : n)
            sum += o - '0';
        if(sum % 3 == 0)
            cout << n << "\n";
        else
            cout << "-1\n";
    }

    return 0;
}