// 소음
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a, b;
    char op;
    cin >> a >> op >> b;

    int alength = a.length();
    int blength = b.length();

    if(op == '*')
    {
        int total = alength + blength - 2;
        cout << '1';
        for(int i = 0; i < total; i++)
            cout << '0';
    }

    else
    {
        if(alength == blength)
        {
            cout << '2';
            for(int i = 0; i < alength - 1; i++)
                cout << '0';
        }

        else if(alength != blength)
        {
            int x = max(alength, blength);
            int y = min(alength, blength);
            for(int i = x; i > 0; i--)
            {
                if(i == x || i == y)
                    cout << '1';
                else
                    cout << '0';
            }
        }
    }
    
    return 0;
}