// 약수들의 합
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, sum = 0;
    vector<int> v;

    while(1)
    {
        cin >> n;
        if(n == -1)
            break;
        for(int i = 1; i < n; i++)
        {
            if(n % i == 0)
            {
                v.push_back(i);
                sum += i;
            }
        }
        if(sum != n)
            cout << n << " is NOT perfect.\n";
        else if(sum == n)
        {
            cout << n << " = ";
            for(int i = 0; i < v.size() - 1; i++)
                cout << v[i] << " + ";
            cout << v[v.size() - 1] << "\n";
        }
        v.clear();
        sum = 0;
    }
    return 0;
}