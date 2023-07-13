// 영수증
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int total, diff = 0;
    cin >> total;
    
    for(int i = 0; i < 9; i++)
    {
        int input;
        cin >> input;
        diff += input;
    }
    
    cout << total - diff << "\n";
    return 0;
}