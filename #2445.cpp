// 별 찍기 - 8
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i+1; j++) cout << "*";
        for(int j = 0; j < 2*(n-i-1); j++) cout << " ";
        for(int j = 0; j < i+1; j++) cout << "*";
        cout << "\n";
    }
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++) cout << "*";
        for(int j = 0; j < 2*(i+1); j++) cout << " ";
        for(int j = 0; j < n-i-1; j++) cout << "*";
        cout << "\n";
    }

    return 0;
}