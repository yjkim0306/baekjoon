// 2진수 8진수
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;

    while(str.length() % 3 != 0)
    {
        str = '0' + str;
    } 

    for(int i = 0; i < str.length(); i+= 3)
    {
        int num = (str[i] - '0') * 4 + (str[i + 1] - '0') * 2 + (str[i + 2] - '0') * 1;
        cout << num;
    }
    cout << "\n";
    
    return 0;
}