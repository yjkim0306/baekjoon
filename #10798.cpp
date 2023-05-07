// 세로읽기
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string word[5];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(int i = 0; i < 5; i++)
        cin >> word[i];

    for(int i = 0; i < 15; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(i < word[j].size())
                cout << word[j][i];
        }
    }

    cout << "\n";
    
    return 0;
}