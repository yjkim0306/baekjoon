// 달팽이는 올라가고 싶다
#include <iostream>

using namespace std;
int main(){
    int a, b, v;
    cin >> a >> b >> v;
    cout << (int)(v-b-1)/(a-b)+1 << endl;
    return 0;
}