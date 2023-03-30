// 상근날드
#include <iostream>
#include <algorithm>
using namespace std;
int burger[3];
int beverage[2];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    for(int i = 0; i < 3; i++) cin >> burger[i];
    for(int i = 0; i < 2; i++) cin >> beverage[i];
    int sum = *min_element(burger, burger+3) + *min_element(beverage, beverage+2) - 50;
    cout << sum << "\n";

    return 0;
}