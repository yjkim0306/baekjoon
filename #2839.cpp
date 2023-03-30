// 설탕 배달
#include <iostream>

using namespace std;
int main(){
    int N, res = -1;
    cin >> N;
    for(int i = N/5; i >=0; i--){
        if((N-i*5)%3==0){
            res = i+(N-i*5)/3;
            break;
        }
    }
    cout << res << endl;

    return 0;
}