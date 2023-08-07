// 회사에 있는 사람
#include <iostream>
#include <map>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    
    map<string, string, greater<string> > m;

    while(n--)
    {
        string name, input;
        cin >> name >> input;
        if(input == "enter")
            m[name] = input;
        else if(input == "leave")
            m.erase(name);
    }

    map<string, string>::iterator iter;
    for(iter = m.begin(); iter != m.end(); ++iter)
        cout << iter->first << "\n";
        
    return 0;
}