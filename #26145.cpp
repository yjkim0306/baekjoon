// 출제비 재분배
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m; //1~N 출제자, N+1~N+M 검수자
    int money[2001] = {0, };

    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++){
        cin >> money[i];
    }  

    int div;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n + m ; j++){
            cin >> div;
            money[i] -= div;
            money[j] += div;
        }
    }

    for(int i = 1 ; i <= n + m ; i++) cout << money[i] << " ";
    
    return 0;
}