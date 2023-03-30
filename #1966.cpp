// 프린터 큐
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int cnt = 0;
    int N, M, input; // 문서의 개수, 현재 큐에서 몇번째에 놓여 있는지
    int T; // 테스트 케이스
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        cnt = 0;
        cin >> N >> M;
        queue<pair <int, int> > q;
        priority_queue<int> pq;
        for(int j = 0; j < N; j++)
        {
            cin >> input;
            q.push({j, input});
            pq.push(input);
        }
        while(!q.empty())
        {
            int idx = q.front().first;
            int val = q.front().second;
            q.pop();
            if(pq.top() == val)
            {
                pq.pop();
                ++cnt;
                if(idx == M)
                {
                    cout << cnt << endl;
                    break;
                }
            }
            else q.push({idx, val});
        }
    }
    return 0;
}