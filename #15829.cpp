// Hashing
#include <iostream>
#include <cmath>
#define MOD 1234567891
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    char str[50];
    int L;
    long long ans = 0;
    long long sum = 0;
    cin >> L;

    for(int i = 0; i < L; i++)
    {
        cin >> str[i];
    }
    for(int i = 0; i < L; i++)
    {
        ans = str[i] - 96;
        for(int j = 0; j < i; j++)
        {
            ans = ans * 31;
            ans %= MOD;
        }
        sum += ans;
        sum %= MOD;
    }
    cout << sum << "\n";
    
    return 0;
}