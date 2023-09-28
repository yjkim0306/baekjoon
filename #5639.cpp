// 이진 검색 트리
#include <iostream>
#include <vector>
using namespace std;

int tree[10000];

void postOrder(int start, int end)
{
    if(start >= end) // 루트 노드보다 큰 값이 나오기 전까지는 모두 루트 노드의 왼쪽 자식들일 것이다.
        return;
    if(start == end - 1) 
    {
        cout << tree[start] << "\n";
        return;
    }

    int idx = start + 1;
    while(idx < end)
    {
        if(tree[start] < tree[idx])
            break;
        idx++;
    }

    postOrder(start + 1, idx);
    postOrder(idx, end);
    cout << tree[start] << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num, inputIdx = 0;
    while(cin >> num)
        tree[inputIdx++] = num;
    postOrder(0, inputIdx);

    return 0;
}