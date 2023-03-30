// 최댓값
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int maximum = 0;
    int max_xcoordinate = 0;
    int max_ycoordinate = 0;
    int arr[9][9];
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if(maximum <= arr[i][j])
            {
                max_xcoordinate = i+1;
                max_ycoordinate = j+1;
            }
            maximum = max(arr[i][j], maximum);
        }
    }
    cout << maximum << "\n" << max_xcoordinate << " " << max_ycoordinate << "\n";
    
    return 0;
}