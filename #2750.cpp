// 수 정렬하기
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
    int N, n;
    vector<int> vec;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> n;
        vec.push_back(n);
    }
    sort(vec.begin(), vec.end());
    for(int i = 0; i < N; i++)
    {
        cout << vec[i] << endl;
    }
    return 0;
}