// 내려가기
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int maxDP[3] = {0,}, minDP[3] = {0,};
    int input[3];

    int n, temp0, temp1, temp2;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> input[0] >> input[1] >> input[2];

        temp0 = minDP[0];
        temp1 = minDP[1];
        temp2 = minDP[2];

        minDP[0] = min(temp0, temp1) + input[0];
        minDP[2] = min(temp1, temp2) + input[2];
        minDP[1] = min(min(temp0, temp1), temp2) + input[1];

        temp0 = maxDP[0];
        temp1 = maxDP[1];
        temp2 = maxDP[2];

        maxDP[0] = max(temp0, temp1) + input[0];
        maxDP[2] = max(temp1, temp2) + input[2];
        maxDP[1] = max(max(temp0, temp1), temp2) + input[1];
    }

    cout << *max_element(maxDP, maxDP + 3) << " " << *min_element(minDP, minDP + 3) << "\n";

    return 0;
}