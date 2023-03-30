// 시험 감독
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, b, c; // 시험장의 개수, 총감독관이 감시할 수 있는 응시자 수, 부감독관이 감시할 수 있는 응시자 수
    long long res = 0; // 감독관 최소 수
    vector<int> a; // 각 시험장에 있는 응시자 수
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    cin >> b >> c;

    for(int i = 0; i < n; i++)
    {
        int tmp = 1;
        if(a[i] > b)
        {
            tmp += (a[i] - b) / c;
            if((a[i] - b) % c > 0) tmp += 1;
        }
        res += tmp;
    }
    cout << res << "\n";

    return 0;
}