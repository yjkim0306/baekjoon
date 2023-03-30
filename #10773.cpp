// 제로
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int k;
    int sum = 0;
    cin >> k;
    stack<int> s;
    for(int i = 0; i < k; i++)
    {
        int temp;
        cin >> temp;
        if(temp == 0) s.pop();
        else s.push(temp);
    }
    int size = s.size();
    for(int i = 0; i < size; i++)
    {
        sum += s.top();
        s.pop();
    }
    cout << sum << "\n";

    return 0;
}