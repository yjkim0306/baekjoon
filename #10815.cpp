// 숫자 카드
#include <iostream>
#include <algorithm>
using namespace std;
int c1[500001];
int c2[500001]; // 상근이가 가지고 있는 숫자 카드에 적혀있는 정수의 집합, 상근이가 가지고 있는 숫자 카드인지 아닌지를 구해야 할 수의 집합
int res[500001] = {0,}; // 결과를 출력할 집합
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int N, M; // 상근이가 가지고 있는 숫자 카드의 개수
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> c1[i];
    }
    cin >> M;
    for(int i = 0; i < M; i++)
    {
        cin >> c2[i];
    }
    sort(c1, c1+N); // 오름차순으로 정렬
    for(int i = 0; i < M; i++) // 이진탐색
    {
        int right = N - 1;
        int left = 0;
        while(left <= right)
        {
            int mid = (left + right) / 2;
            if(c1[mid] == c2[i])
            {
                res[i] = 1;
                break;
            }
            if(c1[mid] > c2[i])
            {
                right = mid - 1;
            }
            else left = mid + 1;
        }
    }
    for(int i = 0; i < M; i++)
    {
        cout << res[i] << " ";
    }
    cout << "\n";
    return 0;
}