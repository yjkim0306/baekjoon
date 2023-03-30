// 평균 점수
#include <iostream>
using namespace std;
int main()
{
    int avg;
    int arr[5];
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        if(arr[i] < 40) arr[i] = 40;
    }
    for(int i = 0; i < 5; i++)
    {
        avg += arr[i];
    }
    cout << avg/5 << endl;
    
    return 0;
}