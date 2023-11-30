// 최솟값과 최댓값
#include <iostream>
#include <vector>
#include <cmath>
#include <cstdio>
using namespace std;

int n, m;
int arr[100001];
vector<int> min_tree, max_tree;

void init(int node, int start, int end)
{
    if(start == end)
    {
        min_tree[node] = max_tree[node] = arr[start];
        return;
    }
    else
    {
        init(node * 2, start, (start + end) / 2);
        init(node * 2 + 1, (start + end) / 2 + 1, end);
        min_tree[node] = min(min_tree[node * 2], min_tree[node * 2 + 1]);
        max_tree[node] = max(max_tree[node * 2], max_tree[node * 2 + 1]);
        return;
    }
}

pair<int, int> findMinMax(int node, int start, int end, int left, int right)
{
    if(left > end || right < start)
        return make_pair(INT32_MAX, 0);
    else if(left <= start && end <= right)
        return make_pair(min_tree[node], max_tree[node]);
    else
    {
        pair<int, int> l, r;
        l = findMinMax(node * 2, start, (start + end) / 2, left, right);
        r = findMinMax(node * 2 + 1, (start + end) / 2 + 1, end, left, right);
        return make_pair(min(l.first, r.first), max(l.second, r.second));
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    
    int h = (int)ceil(log2(n));
    min_tree = vector<int>(1 << (h + 1));
    max_tree = vector<int>(1 << (h + 1));

    for(int i = 1; i <= n; i++)
        cin >> arr[i];
        
    init(1, 1, n);
    int left, right;
    pair<int, int> res;
    
    while(m--)
    {
        cin >> left >> right;
        res = findMinMax(1, 1, n, left, right);
        cout << res.first << " " << res.second << "\n";
    }

    return 0;
}