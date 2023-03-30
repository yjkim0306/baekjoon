// 직각삼각형
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int i, j, k;
    while(1)
    {
        cin >> i >> j >> k;
        if(i == 0 && j == 0 && k == 0) return 0;
        if(pow(i,2)+pow(j,2) == pow(k,2) || pow(j,2) + pow(k,2) == pow(i,2) || pow(i,2) + pow(k,2) == pow(j,2)) cout << "right\n";
        else cout << "wrong\n";
    }
    return 0;
}