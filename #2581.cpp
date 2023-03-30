// 소수
#include <iostream>

using namespace std;
int main(){
    int M, N;
    int sum = 0;
    int min = 0;
    int count = 0;
    cin >> M >> N;
    for(int i = N; i >= M; i--){
        count = 0;
        for(int j = 1; j <= i; j++){
            if(i%j == 0) count++;
        }
        if(count == 2){
            sum += i;
            min = i;
        }
    }
    if(sum == 0) cout << "-1" << endl;
    else {
        cout << sum << endl;
        cout << min << endl;
    }

    return 0;
}