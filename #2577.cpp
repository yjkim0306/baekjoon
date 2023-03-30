// 숫자의 개수
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, product;
    int arr[10] = {0,};
    cin >> a >> b >> c;
    product = a * b * c;
    while(product > 0)
    {
        arr[product%10]++;
        product /= 10;
    }
    for(int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}