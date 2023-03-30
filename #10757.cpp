// 큰 수 A+B
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int Az[10001], Bz[10001], res[10002], temp = 0;
int main(){
    string A, B;
    cin >> A >> B;
    int len1 = A.size();
    int len2 = B.size();
    int x = max(len1, len2)+1;
    for(int i = 0; i < len1; i++)
    {
        Az[i] = A[len1 - i - 1]-'0';
    }
    for(int i = 0; i < len2; i++)
    {
        Bz[i] = B[len2 - i - 1]-'0';
    }
    for(int i = 0; i < x; i++)
    {
        if(temp==0)
        {
            int num = Az[i] + Bz[i];
            if(num>9)
            {
                temp = 1;
                num -= 10;
            }
            res[i] = num;
        }
        else if(temp == 1)
        {
            int num = Az[i] + Bz[i] + 1;
            temp = 0;
            if(num > 9)
            {
                temp = 1;
                num -= 10;
            }
            res[i] = num;
        }

    }
    if(res[x-1] == 0) x--;
    for(int i = x-1; i >= 0; i--)
    {
        cout << res[i];
    }
    cout << endl;

    return 0;
}