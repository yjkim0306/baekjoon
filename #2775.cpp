// 부녀회장이 될테야
#include <iostream>

using namespace std;

int calc(int k, int n){
    if(n == 1) return 1;
    if(k == 0) return n;
    return (calc(k-1, n) + calc(k, n-1));
}
int main(){
    int T, k, n; // 테스트 케이스, 층, 호
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> k >> n;
        cout << calc(k,n) << endl;
    }
    return 0;
}