// 문자열 분석
#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input;
    while(getline(cin, input))
    {
        int lowercase = 0, uppercase = 0, num = 0, blank = 0;
        for(int i = 0; i < input.length(); i++)
        {
            if(input[i] >= 97 && input[i] <= 122)
                lowercase++;
            else if(input[i] >= 65 && input[i] <= 90)
                uppercase++;
            else if(input[i] >= 48 && input[i] <= 57)
                num++;
            else if(input[i] == ' ')
                blank++;
        }

        cout << lowercase << " " << uppercase << " " << num << " " << blank << "\n";
    }    
    
    return 0;
}