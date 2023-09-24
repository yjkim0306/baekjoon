// 시험 점수
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int s = 0, t = 0, input;

    for(int i = 0; i < 4; i++)
    {
        cin >> input;
        s += input;
    }

    for(int i = 0; i < 4; i++)
    {
        cin >> input;
        t += input;
    }

    if(s >= t)
        cout << s << "\n";
    else
        cout << t << "\n";
        
    return 0;
}