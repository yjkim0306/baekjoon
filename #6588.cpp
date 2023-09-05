// 골드바흐의 추측
#include <iostream>
using namespace std;

int prime[1000000] = {0,};

void check()
{
    for(int i = 2; i * i <= 1000000; i++)
    {
        if(prime[i] == 0)
        {
            for(int j = i * i; j <= 1000000; j += i)
                prime[j] = 1;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    check();

    while(1)
    {
        cin >> n;
        if(n == 0)
            break;
        
        bool flag = false;

        for(int i = 3; i <= n; i += 2)
        {
            if(prime[i] == 0 && prime[n - i] == 0)
            {
                cout << n << " = " << i << " + " << n - i << "\n";
                flag = true;
                break;
            }
        }

        if(!flag)
            cout << "Goldbach's conjecture is wrong.\n";
    }
    return 0;
}