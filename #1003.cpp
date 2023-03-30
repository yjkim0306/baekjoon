// 피보나치 함수
#include <iostream>
using namespace std;

int return_0[41];
int return_1[41];

int main()
{
    int T; // 테스트 케이스
    cin >> T;
    return_0[0] = 1;
    return_0[1] = 0;
    return_0[2] = 1;
    return_1[0] = 0;
    return_1[1] = 1;
    return_1[2] = 1;
    for(int i = 3; i < 41; i ++)
    {
        return_0[i] = return_0[i-1] + return_0[i-2];
        return_1[i] = return_1[i-1] + return_1[i-2];
    }
    for(int i = 0; i < T; i++)
    {
        int n;
        cin >> n;
        cout << return_0[n] << " " << return_1[n] << "\n";
    }

    return 0;
}