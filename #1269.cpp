// 대칭 차집합
#include <iostream>
#include <map>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    map<int, bool> Map;
    cin >> n >> m;

    for(int i = 0; i < n + m; i++)
    {
        int input;
        cin >> input;
        
        if(Map[input] == true)
            Map.erase(input);
        else
            Map[input] = true;
    }

    cout << Map.size() << "\n";
    
    return 0;
}