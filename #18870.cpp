// 좌표 압축
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int arr[1000000];
vector<int> v;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int N; //좌표의 개수
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
        v.push_back(arr[i]);
    }
    sort(v.begin(), v.end()); // 원소를 오름차순 정렬
    v.erase(unique(v.begin(), v.end()),v.end()); // 중복되는 수들을 vector의 뒤로 옮기고, 그 수들을 지움
    for(int i = 0; i < N; i++)
    {
        int res = lower_bound(v.begin(), v.end(), arr[i])-v.begin(); // arr부터 끝까지 탐색하면서 i번째 원소 이상의 숫자가 처음 나오는 위치의 인덱스 번호 리턴
        cout << res << " ";
    }
    cout << "\n";

    return 0;
}