// 지능형 기차 2
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int out, in, cur = 0, max = 0;
    for(int i = 0; i < 10; i++)
    {
        cin >> out >> in;
        cur = cur - out + in;
        if(max < cur) 
            max = cur;
    }

    cout << max << "\n";

    return 0;
}