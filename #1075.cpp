// 나누기
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, f;
    cin >> n >> f;

    n = n - n % 100;
    for(int i = n;; i++)
    {
        if(i % f == 0)
        {
            if(i % 100 < 10)
                cout << "0";
            cout << i % 100 << "\n";
            break;
        }
    }
    return 0;
}