// 과제 안 내신 분..?
#include <iostream>
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();

    int a;
    bool check[31] = {0,};

    for(int i = 0; i < 28; i++)
    {
        cin >> a;
        check[a] = 1;
    }

    for(int i = 1; i <= 30; i++)
    {
        if(check[i] == 0)
            cout << i << "\n";
    }

    return 0;
}