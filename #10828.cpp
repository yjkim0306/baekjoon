// 스택
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    stack<int> st;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        if(str == "push")
        {
            int k;
            cin >> k; 
            st.push(k);
        }
        else if(str == "pop")
        {
            if(st.empty() == true) cout << "-1\n";
            else
            {
                cout << st.top() << '\n';
                st.pop();
            } 
        }
        else if(str == "size")
        {
            cout << st.size() << "\n";
        }
        else if(str == "empty")
        {
            cout << st.empty() << "\n";
        }  
        else if(str == "top")
        {
            if(st.empty() == true) cout << "-1\n";
            else cout << st.top() << "\n";
        }
    }

    return 0;
}