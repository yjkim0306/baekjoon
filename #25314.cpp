// 코딩은 체육과목 입니다
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    int num = n / 4;
    while(num--) cout << "long ";
    cout << "int\n";

    return 0;
}