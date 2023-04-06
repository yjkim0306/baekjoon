// 수들의 합
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long s;
    cin >> s;

    long long sum = 0, adder = 1;
    int n = 0;

    while(1)
    {
        sum += adder;
        n++;
        if(sum > s) 
            break;
        else
            adder++;
    }

    cout << n - 1 << "\n";

    return 0;
}