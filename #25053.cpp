// Organizing SWERC
#include <iostream>
using namespace std;

int arr[11];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, sum = 0;
    cin >> t;

    while(t--)
    {
        bool isCorrect;
        int n;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            int b, d;
            cin >> b >> d;
            if(b > arr[d]) arr[d] = b;
        }

        for(int i = 0; i < 10; i++)
        {
            if(arr[i] == 0)
            {
                isCorrect = false;
                break;
            }
            else
                sum += arr[i];
        }

        if(isCorrect)
            cout << sum << "\n";
        else
            cout << "MOREPROBLEMS\n";
    }

    return 0;
}