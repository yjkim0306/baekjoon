// 거스름돈
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int price, change, res = 0;
    cin >> price;
    change = 1000 - price;
    while(change != 0)
    {
        if(change/500 >= 1)
        {
            change -= 500;
            res++;
        }
        else if(change/100 >= 1) 
        {
            change -= 100;
            res++;
        }
        else if(change/50 >= 1)
        {
            change -= 50;
            res++;
        }
        else if(change/10 >= 1)
        {
            change -= 10;
            res++;
        }
        else if(change/5 >= 1)
        {
            change -= 5;
            res++;
        }
        else if(change/1 >= 1)
        {
            change -= 1;
            res++;
        }
    }
    cout << res << "\n";

    return 0;
    
}