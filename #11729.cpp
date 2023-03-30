// 하노이 탑 이동 순서
#include <iostream>
#include <cmath>
using namespace std;

void hanoi(int from, int by, int to, int n)
{
    if(n==1) 
    {
        cout << from << " " << to << "\n";
    }
    else
    {
        hanoi(from, to, by, n-1);
        cout << from << " " << to << "\n";
        hanoi(by, from, to, n-1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int N;
    cin >> N;
    cout << (int)pow(2, N) - 1 << "\n";
    hanoi(1 ,2, 3, N);

    return 0;
}