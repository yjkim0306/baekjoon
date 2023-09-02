// 분수 합
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int temp = 1;
    while(b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int denominator = a * d + b * c; 
    int numerator = b * d;

    int res = gcd(denominator, numerator);

    denominator /= res;
    numerator /= res;

    cout << denominator << " " << numerator << "\n";
    
    return 0;
}