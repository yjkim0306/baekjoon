// 상근이의 여행
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n >> m;
        for(int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
        }

        cout << n - 1 << "\n";
    }
    return 0;
}