// 세탁소 사장 동혁
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t; 

    while(t--)
    {
        int c;
        cin >> c;

        int quarter = 0, dime = 0, nickel = 0, penny = 0;
        while(c > 0)
        {
            if(c >= 25)
            {
                c -= 25;
                quarter++;
            }
            else if(c >= 10)
            {
                c -= 10;
                dime++;
            }
            else if(c >= 5)
            {
                c -= 5;
                nickel++;
            }
            else if(c > 0)
            {
                c--;
                penny++;
            }
        }
        cout << quarter << " " << dime << " " << nickel << " " << penny << "\n";
    }
    return 0;
}