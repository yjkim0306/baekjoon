// 8진수 2진수
#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input;
    string binary[8] = {"000", "001", "010", "011", "100", "101", "110", "111"};
    int temp;

    cin >> input;

    for(int i = 0; i < input.length(); i++)
    {
        temp = input[i] - '0';
        if(i == 0)
            cout << stoi(binary[temp]);
        else
            cout << binary[temp];
    }

    cout << "\n";
    
    return 0;
}