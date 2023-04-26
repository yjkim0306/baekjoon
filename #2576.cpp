// 홀수
#include <iostream>
using namespace std;

int arr[8]; 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int odd = 0;
    int min = 100;

    for(int i = 0; i < 7; i++)
    {
        cin >> arr[i];
        if(arr[i] % 2 == 1)
        {
            odd += arr[i];
            if(arr[i] < min)
                min = arr[i];
        }
    }
    if(!odd) 
    {
        cout << "-1\n";
        return 0;
    }
    cout << odd << "\n" << min << "\n";

    return 0;
}