// 알고리즘 수업 - 피보나치 수 1
#include <iostream>
using namespace std;

int recursive_calls, dynamic_programming;
int f[40];

int fib(int n)
{
    if(n == 1 || n == 2)
    {
        recursive_calls++;
        return 1;
    }
    else
        return(fib(n - 1) + fib(n - 2));
}

int fibonacci(int n)
{
    f[1] = 1;
    f[2] = 1;

    for(int i = 3; i <= n; i++)
    {
        dynamic_programming++;
        f[i] = f[i - 1] + f[i - 2];
    }

    return f[n];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    cin >> num; 

    fib(num); fibonacci(num);

    cout << recursive_calls << " " << dynamic_programming << "\n";

    return 0;
}