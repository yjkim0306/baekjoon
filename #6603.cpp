// 로또
#include <iostream>
using namespace std;

int k;
int arr[13];
int lotto[6];

void func(int start, int idx)
{
    if(idx == 6)
    {
        for(int i = 0; i < 6; i++)
        {
            cout << lotto[i] << " ";
        }

        cout << "\n";
        
        return;
    }

    for(int i = start; i < k; i++)
    {
        lotto[idx] = arr[i];
        func(i + 1, idx + 1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    while(1)
    {
        cin >> k;
        if(k == 0) break;

        for(int i = 0; i < k; i++) cin >> arr[i];

        func(0, 0);
        cout << "\n";
    }
    
    return 0;
}