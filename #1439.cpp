// 뒤집기
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;
    int numOfZeros = 0;
    int numOfOnes = 0;

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] != str[i + 1])
        {
            if(str[i] == '0')
                numOfZeros++;
            else
                numOfOnes++;
        }
    }

    cout << min(numOfZeros, numOfOnes) << "\n";

    return 0;
}