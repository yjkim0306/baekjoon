// 피보나치 수
#include <iostream>
using namespace std;

int temp[100] = {0,};
int Fibonacci(int n)
{
    if(n <= 1) return n;
    if(temp[n] > 0) return temp[n];
    temp[n] = Fibonacci(n - 1) + Fibonacci(n - 2);
    return temp[n];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin >> n;
    cout << Fibonacci(n) << "\n";
    return 0;
}