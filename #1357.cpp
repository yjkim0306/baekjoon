// 뒤집힌 덧셈
#include <iostream>
#include <algorithm>
using namespace std;

int rev(string x)
{
    reverse(x.begin(), x.end());
    return stoi(x);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string x, y;
    cin >> x >> y;

    cout << rev(to_string(rev(x) + rev(y))) << "\n";
    
    return 0;
}