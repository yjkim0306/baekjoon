// 별 찍기 - 10
#include <iostream>
using namespace std;
void star (int n, int row, int col)
{
    if(n == 1) cout << "*";
    else if(row%n > n/3 && row%n <= n*2/3 && col%n > n/3 && col%n <= n*2/3) cout << " ";
    else star(n/3, row, col);
}

int main()
{
    int N;
    cin >> N;
    for(int row = 1; row <= N; row++)
    {
        for(int col = 1; col <= N; col++) 
        {
            star(N, row, col);
        }
        cout << "\n";
    }
    
    return 0;
}