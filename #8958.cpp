// OX퀴즈
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; // 테스트 케이스
    cin >> n;
    
    int combo, res;
    string arr = ""; // ox 저장할 문자열
    for(int i = 0; i < n; i++)
    {
        combo = 1; // 추가 점수
        res = 0; // 총점
        cin >> arr;
        for(int j = 0; j < arr.size(); j++)
        {
            if(arr[j] == 'O') // O일 경우
            {
                res += combo; // 총점에 점수 부여
                combo++; // 점수 +1
            }
            if(arr[j] == 'X') combo = 1; // X일 경우 점수 초기화
        }

        cout << res << "\n";
    }

    return 0;
}