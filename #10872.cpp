// 팩토리얼
#include <iostream>

using namespace std;
int Factorial(int n)
{
    if(n <= 1) return 1;
    return n * Factorial(n-1);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int N;
    cin >> N;
    cout << Factorial(N) << "\n";

    return 0;
}