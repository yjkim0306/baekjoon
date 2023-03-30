// 벌집
#include <iostream>

using namespace std;

int main()
{
    int count = 1, input, num = 1;
    cin >> input;
    while(num < input)
    {
        count++;
        num += 6*(count-1);
    }
    cout << count << endl;

    return 0;
}