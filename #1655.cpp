// 가운데를 말해요
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    
    priority_queue<int> max; // 작은 것들의 max 값이 top
    priority_queue< int, vector<int>, greater<int> > min; // 큰 것들의 min 값이 top

    while(n--)
    {
        int input;
        cin >> input;

        if(max.size() == min.size())
            max.push(input);
        else
            min.push(input);
        if(!max.empty() && !min.empty() && max.top() > min.top())
        {
            int max_val, min_val;
            max_val = max.top();
            min_val = min.top();
            max.pop();
            min.pop();
            max.push(min_val);
            min.push(max_val);
        }

        cout << max.top() << "\n";
    }
    
    return 0;
}