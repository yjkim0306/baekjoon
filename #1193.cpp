// 분수찾기
#include <iostream>

using namespace std;
int main(){
    int x, i = 1 /* x번째 분수, 분모 & 분자 */
    cin >> x;
    while(x > i){
        x -= i;
        i++;
    }

    if(i%2 == 1) cout << i + 1 - x << '/' << x << endl; /* 홀수번째 대각선일 때 */
    else cout << x << '/' << i +  1 - x << endl; /* 짝수번째 대각선일 때 */

    return 0;
}