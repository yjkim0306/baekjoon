// 0 = not cute / 1 = cute
#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, not_cute = 0, cute = 0;
    cin >> n;
    while(n--)
    {
        int input;
        cin >> input;
        if(input == 0)
            not_cute++;
        else if(input == 1)
            cute++;
    }
    
    if(not_cute > cute)
        cout << "Junhee is not cute!\n";
    else if(not_cute < cute)
        cout << "Junhee is cute!\n";
        
    return 0;
}