// R2
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int R1, S;
    cin >> R1 >> S;
    int R2 = 2*S - R1;

    cout << R2 << "\n";
    return 0;
}