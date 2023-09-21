// 스위치 켜고 끄기 
#include <iostream>
#include <vector>
using namespace std;

int arr[101];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
        cin >> arr[i];

    int m;
    cin >> m;

    int gen, num;
    for(int i = 0; i < m; i++)
    {
        cin >> gen >> num;
        if(gen == 1) // 남학생인 경우
        {
            for(int j = 1; j <= n; j++)
            {
                if(j % num == 0)
                    arr[j] = !arr[j];
            }
        }
        else
        {
            arr[num] = !arr[num];
            for(int j = 1; arr[num + j] == arr[num - j]; j++)
            {
                if(num + j > n || num - j < 1)
                    break;
                arr[num + j] = !arr[num + j];
                arr[num - j] = !arr[num - j];
            }
        }
    }

    for(int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
        if(i % 20 == 0)
            cout << "\n";
    }

    return 0;
}