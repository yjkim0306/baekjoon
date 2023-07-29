// 링
#include <iostream>
using namespace std;

int arr[100];

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

    int n, res;
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 1; i < n; i++)
    {
        res = gcd(arr[0], arr[i]);

        cout << arr[0] / res << "/" << arr[i] / res << "\n";
    }
    return 0;
}