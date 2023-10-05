// 백설 공주와 일곱 난쟁이
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int arr[10];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, sum = 0;
    for(int i = 0; i < 9; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    for(int i = 0; i < 9; i++)
    {
        for(int j = i + 1; j < 9; j++)
        {
            if(sum - (arr[i] + arr[j]) == 100)
            {
                a = i;
                b = j;
            }
        }
    }

    for(int i = 0; i < 9; i++)
    {
        if(i == a || i == b)
            continue;
        else
            cout << arr[i] << "\n";
    }

    return 0;
}