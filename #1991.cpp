// 트리 순회
#include <iostream>
using namespace std;

int arr[50][2];

void preorder(int n)
{
    if(n == -1) return;
    cout << (char)(n + 'A');
    preorder(arr[n][0]);
    preorder(arr[n][1]);
}

void inorder(int n)
{
    if(n == -1) return;
    inorder(arr[n][0]);
    cout << (char)(n + 'A');
    inorder(arr[n][1]);
}

void postorder(int n)
{
    if(n == -1) return;
    postorder(arr[n][0]);
    postorder(arr[n][1]);
    cout << (char)(n + 'A');
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        char x, y, z;
        cin >> x >> y >> z;
        x = x - 'A';
        if(y == '.') arr[x][0] = -1;
        else arr[x][0] = y - 'A';
        if(z == '.') arr[x][1] = -1;
        else arr[x][1] = z - 'A';
    }
    preorder(0);
    cout << "\n";
    inorder(0);
    cout << "\n";
    postorder(0);
    cout << "\n";

    return 0;
}