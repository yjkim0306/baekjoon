// 아!
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str1, str2;
    cin >> str1 >> str2;

    if(str1.length() >= str2.length())
        cout << "go\n";
    else 
        cout << "no\n";
        
    return 0;
}