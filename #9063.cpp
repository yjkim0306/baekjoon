// 대지
#include <iostream>
#include <algorithm>
using namespace std;

int a[100001], b[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++)
        cin >> a[i] >> b[i];
    cout << (*max_element(a, a + n) - *min_element(a, a + n)) * (*max_element(b, b + n) - *min_element(b, b + n)) << "\n";
    return 0;
}