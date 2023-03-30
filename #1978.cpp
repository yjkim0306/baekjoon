// 소수 찾기
#include <iostream>

using namespace std;
int main(){
    int N, k, count;
    int res = 0;
    cin >> N;
    for(int i = 0; i < N; i++){
        count = 0;
        cin >> k;
        for(int j = 1; j <= k; j++){
            if(k%j == 0) count++;
        }
        if(count == 2) res++;
    }
    cout << res << endl;

    return 0;
}