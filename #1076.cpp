// 저항
#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string color[10] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
    
    long long res = 0;
    int mem[3] = {0,};
    for(int i = 0; i < 3; i++)
    {
        string temp;
        cin >> temp;
        for(int j = 0; j < 10; j++)
        {
            if(color[j] == temp)
                mem[i] = j;
        }
        res = mem[0] * 10 + mem[1];
    }

    for(int i = 0; i < mem[2]; i++) 
        res *= 10;
        
    cout << res << "\n";

    return 0;
}