// 덱
#include <iostream>
#include <deque>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    deque<int> dq;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        if(input == "push_front")
        {
            int num;
            cin >> num;
            dq.push_front(num);
        }
        else if(input == "push_back")
        {
            int num;
            cin >> num;
            dq.push_back(num);
        }
        else if(input == "pop_front")
        {
            if(dq.empty() == true) cout << "-1\n";
            else
            { 
                cout << dq.front() << "\n";
                dq.pop_front();
            }
        }
        else if(input == "pop_back")
        {
            if(dq.empty() == true) cout << "-1\n";
            else
            {
                cout << dq.back() << "\n";
                dq.pop_back();
            }
        }
        else if(input == "size")
        {
            cout << dq.size() << "\n";
        }
        else if(input == "empty")
        {
            cout << dq.empty() << "\n";
        }
        else if(input == "front")
        {
            if(dq.empty() == true) cout << "-1\n";
            else cout << dq.front() << "\n";
        }
        else if(input == "back")
        {
            if(dq.empty() == true) cout << "-1\n";
            else cout << dq.back() << "\n";
        }
    }
    return 0;
}