// 2007년
#include <iostream>
using namespace std;
int main()
{
    int x, y; // x월 y일
    cin >> x >> y;
    if(x == 1 || x == 10)
    {
        if(y%7 == 1) cout << "MON";
        else if(y%7 == 2) cout << "TUE";
        else if(y%7 == 3) cout << "WED";
        else if(y%7 == 4) cout << "THU";
        else if(y%7 == 5) cout << "FRI";
        else if(y%7 == 6) cout << "SAT";
        else if(y%7 == 0) cout << "SUN";
    }

    else if(x == 2 || x == 3 || x == 11)
    {
        if(y%7 == 1) cout << "THU";
        else if(y%7 == 2) cout << "FRI";
        else if(y%7 == 3) cout << "SAT";
        else if(y%7 == 4) cout << "SUN";
        else if(y%7 == 5) cout << "MON";
        else if(y%7 == 6) cout << "TUE";
        else if(y%7 == 0) cout << "WED";
    }

    else if(x == 4 || x == 7)
    {
        if(y%7 == 1) cout << "SUN";
        else if(y%7 == 2) cout << "MON";
        else if(y%7 == 3) cout << "TUE";
        else if(y%7 == 4) cout << "WED";
        else if(y%7 == 5) cout << "THU";
        else if(y%7 == 6) cout << "FRI";
        else if(y%7 == 0) cout << "SAT";
    }

    else if(x == 5)
    {
        if(y%7 == 1) cout << "TUE";
        else if(y%7 == 2) cout << "WED";
        else if(y%7 == 3) cout << "THU";
        else if(y%7 == 4) cout << "FRI";
        else if(y%7 == 5) cout << "SAT";
        else if(y%7 == 6) cout << "SUN";
        else if(y%7 == 0) cout << "MON";
    }
    
    else if(x == 6)
    {
        if(y%7 == 1) cout << "FRI";
        else if(y%7 == 2) cout << "SAT";
        else if(y%7 == 3) cout << "SUN";
        else if(y%7 == 4) cout << "MON";
        else if(y%7 == 5) cout << "TUE";
        else if(y%7 == 6) cout << "WED";
        else if(y%7 == 0) cout << "THU";        
    }
    
    else if(x == 8)
    {
        if(y%7 == 1) cout << "WED";
        else if(y%7 == 2) cout << "THU";
        else if(y%7 == 3) cout << "FRI";
        else if(y%7 == 4) cout << "SAT";
        else if(y%7 == 5) cout << "SUN";
        else if(y%7 == 6) cout << "MON";
        else if(y%7 == 0) cout << "TUE";
    }

    else if(x == 9 || x == 12)
    {
        if(y%7 == 1) cout << "SAT";
        else if(y%7 == 2) cout << "SUN";
        else if(y%7 == 3) cout << "MON";
        else if(y%7 == 4) cout << "TUE";
        else if(y%7 == 5) cout << "WED";
        else if(y%7 == 6) cout << "THU";
        else if(y%7 == 0) cout << "FRI";
    }
    return 0;
}