// 열 개씩 끊어 출력하기
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    string str;
    cin >> str;
    for(int i = 0; i <= (int)strlen(str.c_str())/10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
           if(str[i*10+j] == '\0') return 0;
           else cout << str[i*10+j];
        }
        cout << "\n";
    }
    return 0;
}