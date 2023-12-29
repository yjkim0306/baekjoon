// 트리의 순회
#include <iostream>
using namespace std;

int Index[100001];
int inorder[100001];
int postorder[100001];

void getPreorder(int inStart, int inEnd, int postStart, int postEnd)
{
    if(inStart > inEnd || postStart > postEnd)
        return;
    int rootIndex = Index[postorder[postEnd]];
    int leftSize = rootIndex - inStart;
    int rightSize = inEnd - rootIndex;
    cout << inorder[rootIndex] << " ";

    getPreorder(inStart, rootIndex - 1, postStart, postStart + leftSize - 1);
    getPreorder(rootIndex + 1, inEnd, postStart + leftSize, postEnd - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cin >> inorder[i];
        Index[inorder[i]] = i;
    }
    for(int i = 1; i <= n; i++)
        cin >> postorder[i];
    
    getPreorder(1, n, 1, n);
    
    return 0;
}