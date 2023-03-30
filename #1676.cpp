// 팩토리얼 0의 개수
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int n;
    cin >> n;
    int res = 0;
    for(int i = 1; i <=n; i++)
    {
        int temp = i;
        while(1)
        {
            if(temp%5 == 0) //나머지가 0일 때 (나누어 떨어질 때)
            {
                res++; //5의 배수이므로 0의 개수 +1
                temp /= 5; //5로 나누어 다음 0이 등장하는지 체크
            }
            else break; //더 이상 나누어지지 않으면 while문 탈출
        }
    }
    cout << res << "\n";
    return 0;
}