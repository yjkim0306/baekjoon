// 제곱 ㄴㄴ 수
#include <iostream>
using namespace std;

long long arr[1000001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long min, max;
    int cnt = 0;
    cin >> min >> max;

    for(long long i = 2; i * i <= max; i++)
    {
        long long n = min / (i * i);
        if(min % (i * i))
            n++;
        while(n * i * i <= max)
        {
            arr[n * i * i - min] = 1;
            n++;
        }
    }

    for(int i = 0; i <= max - min; i++)
    {
        if(arr[i] == 0)
            cnt++;
    }

    cout << cnt << "\n";
    
    return 0;
}