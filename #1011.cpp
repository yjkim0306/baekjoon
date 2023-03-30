// Fly me to the Alpha Centauri
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++)
    {
        long long x, y;
        cin >> x >> y;
        
        long long diff = y - x;
        long long cnt = 0, max = 0;
        
        while(max * max <= diff) max++;
        
        max--;
        cnt = 2 * max - 1;
        
        long long temp = diff - max * max;
        temp = (long long)ceil((double)temp / (double)max);
        cnt += temp;

        cout << cnt << "\n";
    }
    
    return 0;
}