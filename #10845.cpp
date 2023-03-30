// 큐
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    queue<int> q;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        if(input == "push")
        {
            int temp;
            cin >> temp;
            q.push(temp);
        }
        else if(input == "pop")
        {
            if(q.empty() == true) cout << "-1\n";
            else 
            {
                cout << q.front() << "\n";
                q.pop();
            }
        }
        else if(input == "size")
        {
            cout << q.size() << "\n";
        }
        else if(input == "empty")
        {
            cout << q.empty() << "\n";
        }
        else if(input == "front")
        {
            if(q.empty() == true) cout << "-1\n";
            else cout << q.front() << "\n";
        }
        else if(input == "back")
        {
            if(q.empty() == true) cout << "-1\n";
            else cout << q.back() << "\n";
        }
    }
    return 0;
}