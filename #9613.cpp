// GCD 합
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if(a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        long long sum = 0;
        long long arr[100];

        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> arr[i];

        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
                sum += gcd(arr[i], arr[j]);
        }

        cout << sum << "\n";
    }
    return 0;
}