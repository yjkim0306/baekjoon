// 패션왕 신해빈
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int T; // 테스트 케이스
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        int n; // 의상의 개수
        cin >> n;
        string cloth_type[31]; // 의상 종류
        for(int j = 0; j < n; j++)
        {
            char cloth_name[21]; // 의상 이름
            cin >> cloth_name >> cloth_type[j];
        }
        sort(cloth_type, cloth_type+n); // 의상 종류 정렬
        int ans = 1, cnt = 2;
        for(int j = 0; j < n; j++)
        {
            if(cloth_type[j] == cloth_type[j+1]) cnt++; // 정렬을 했을 때 같은 의상 종류가 있으면 cnt 1 늘림
            else
            { 
                ans *= cnt; // 같지 않은 종류의 의상끼리는 곱해줘서 경우의 수
                cnt = 2; // cnt는 다시 2로
            }
        }
        cout << ans - 1 << "\n"; // 총 경우의 수 - 알몸으로 다니는 경우의 수 1
    }
    return 0;
}