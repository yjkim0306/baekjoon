// 그대로 출력하기
#include <iostream>
#include <string>
using namespace std;
int main()
{
    while(1)
    {
        string str;
        getline(cin, str);
        if(str == "") break;
        cout << str << "\n";
    }
    return 0;
}