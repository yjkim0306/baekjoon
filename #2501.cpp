// 약수 구하기
#include <iostream>
using namespace std;

int arr[10001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k, idx = 1;
    cin >> n >> k;
    
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {   
            arr[idx++] = i;  
        }
    }    

    cout << arr[k] << "\n";

    return 0;
}