// 일곱 난쟁이
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int arr[9] = {0,};
    int x, y;
    int sum = 0;
    for(int i = 0; i < 9; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int target = sum  - 100;
    for(int i = 0; i < 9; i++)
    {
        for(int j = i+1; j < 9; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                x = arr[i];
                y = arr[j];
                break;
            }
        }
    }
    sort(arr, arr + 9);
    for(int i = 0; i < 9; i++)
    {
        if(arr[i] != x && arr[i] != y) cout << arr[i] << "\n";
    }
    return 0;
}