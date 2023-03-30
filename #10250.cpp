// ACM 호텔
#include <iostream>

using namespace std;
int main(){
    int T; // 테스트 케이스
    cin >> T;
    int H, W, N; // 층, 방, N번째 손님
    int num = 0; // 방 번호
    for(int i = 0; i < T; i++){
        cin >> H >> W >> N;
        if(N%H == 0) num = H*100+N/H; // 꼭대기 층일 경우
        else num = (N%H)*100+N/H+1;
        cout << num << endl;
    }
    return 0;

}