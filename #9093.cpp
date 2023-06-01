// 단어 뒤집기
#include <iostream>
using namespace std;
string getReversedWord(string word)
{
    string reversedWord = word;
    int size = reversedWord.size();
    for(int i = 0; i < size / 2; i++)
        swap(reversedWord[i], reversedWord[size - 1 - i]);
    return reversedWord;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string str;
    cin >> t;
    cin.ignore();

    while(t--)
    {
        string ans = "";
        getline(cin, str);
        str += ' ';
        
        for(int i = 0; i < str.size(); i++)
        {
            string temp = "";
            while(str[i] != ' ' && i != str.size())
                temp += str[i++];
            
            temp = getReversedWord(temp);
            ans += temp + ' ';
        }
        cout << ans << "\n";
    }

    return 0;
}