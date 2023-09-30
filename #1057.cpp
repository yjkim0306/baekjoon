// 토너먼트
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, kim, lim;
    cin >> n >> kim >> lim;

    int round = 1;
    while(n)
    {
        if((kim + 1) / 2 == (lim + 1) / 2)
            break;
        kim = (kim + 1) / 2;
        lim = (lim + 1) / 2;
        round++;
        n /= 2;
    }
    
    if(!n)
        cout << "-1\n";
    cout << round << "\n";
    
    return 0;
}