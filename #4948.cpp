// 베르트랑 공준
#include <iostream>

using namespace std;
int main(){
    int n;  
    while(1){
        cin >> n;
        if(n == 0) break;
        int arr[250000] = {0,};
        int count = 0;
        for(int i = 2; i <= n; i++){
            if(arr[i] == 1) continue;
            for(int j = 2*i; j <= 2*n; j += i){
                arr[j] = 1;
            }
        }
        for(int i = n+1; i <= 2*n; i++){
            if(arr[i] == 0) count++;
        }
        cout << count << "\n";
    }
    return 0;
}