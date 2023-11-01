// 후위 표기식2
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    string op;
    cin >> n >> op;

    vector<int> v(n);
    stack<double> st;

    for(int i = 0; i < n; i++)
        cin >> v[i];

    for(int i = 0; i < op.length(); i++)
    {
        if(op[i] >= 'A' && op[i] <= 'Z')
            st.push(v[op[i] - 'A']);
        else
        {
            if(!st.empty())
            {
                double temp = st.top();
                st.pop();
                if(op[i] == '+')
                    temp = st.top() + temp;
                else if(op[i] == '-')
                    temp = st.top() - temp;
                else if(op[i] == '*')
                    temp = st.top() * temp;
                else if(op[i] == '/')
                    temp = st.top() / temp;
                st.pop();
                st.push(temp);
            }
        }
    }
    cout << fixed;
    cout.precision(2);
    cout << st.top() << "\n";
    
    return 0;
}