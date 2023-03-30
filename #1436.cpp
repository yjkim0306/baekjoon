// 영화감독 숌
#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int N, cnt = 1, ans = 666; // 입력받을 수, 몇번째 영화인지 판별, 666 초기값
    cin >> N;
    while (cnt < N)
    {
        ans++; //하나씩 늘려가면서
        int test = ans; //테스트
        while(test >= 666) 
        {
            if (test % 1000 == 666) //나머지가 666이면
            {
                cnt++; //+1번째 영화
                break; //while문 탈출
            }
            else test /= 10; //666이 아니면 자릿수 하나 삭제
        }
    }
    cout << ans << "\n";
    return 0;
}