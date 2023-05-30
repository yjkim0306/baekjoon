// 모든 순열
#include <iostream>
using namespace std;

int n;
int arr[9];
int visited[9];

void permutation(int idx)
{
    if(idx == n)
    {
        for(int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << "\n";
        return;
    }

    for(int i = 0; i < n; i++)
    {
        if(!visited[i])
        {
            visited[i] = true;
            arr[idx] = i + 1;
            permutation(idx + 1);
            visited[i] = false;
        }
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    permutation(0);

    return 0;
}