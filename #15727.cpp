// 조별과제를 하려는데 조장이 사라졌다
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
     
    int l;
    cin >> l;

    if(l % 5 == 0) cout << l / 5 << "\n";
    else cout << l / 5 + 1 << "\n";
    
    return 0;
}