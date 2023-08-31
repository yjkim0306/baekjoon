// 키로거
#include <iostream>
#include <list>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;

    list<char> l;
    list<char>::iterator it;
    string str;

    while(t--)
    {
        cin >> str;

        l.clear();
        it = l.begin();

        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == '<')
            {
                if(it != l.begin())
                    it--;
            }
            else if(str[i] == '>')
            {
                if(it != l.end())
                    it++;
            }
            else if(str[i] == '-')
            {
                if(it != l.begin())
                    it = l.erase(--it);
            }
            else
                l.insert(it, str[i]);
        }
        
        for(it = l.begin(); it != l.end(); it++)
        cout << *it;

        cout << "\n";
    }

    return 0;
}