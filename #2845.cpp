// 파티가 끝나고 난 뒤
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int l, p;
    cin >> l >> p;

    for(int i = 0; i < 5; i++)
    {
        int value;
        cin >> value;
        cout << value - l * p << " ";
    }
    cout << "\n";
    
    return 0;
}