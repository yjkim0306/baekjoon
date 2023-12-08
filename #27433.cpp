// 팩토리얼 2
#include <iostream>
using namespace std;

long long factorial(register long long n)
{
    if(n < 2)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    
    cout << factorial(n) << "\n";
    
    return 0;
}