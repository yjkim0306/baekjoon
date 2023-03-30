// 소수 구하기
#include <iostream>

using namespace std;
int arr[1000001]={0,};
int main(){
    int M, N;
    arr[1] = 1;
    cin >> M >> N;
    for(int i = 2; i <= N; i++){
        if(arr[i] == 1) continue;
        for(int j = 2*i; j <= N; j+=i){
            arr[j] = 1;
        }
    }
    for(int i = M; i <= N; i++){
        if(arr[i] == 0) cout << i << "\n";
    }
    return 0;
}