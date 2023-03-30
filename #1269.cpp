// 대칭 차집합
#include <iostream>
#include <set>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int A_size, B_size, n, cnt;
    set<int> A, B, res;
    cin >> A_size >> B_size;
    for(int i = 0; i < A_size; i++)
    {
        cin >> n;
        A.insert(n);
    }
    for(int i = 0; i < B_size; i++)
    {
        cin >> n;
        B.insert(n);
    }
    set<int> B_A;
    for(set<int>::iterator it = A.begin(); it != A.end(); it++)
    {
        B_A.insert(*it);
        for(set<int>::iterator it2 = B.begin(); it2 != B.end(); it2++)
        {
            if(*it2 == *it) B_A.erase(*it);
        }
    }
    set<int> A_B;
    for(set<int>::iterator it = B.begin(); it != B.end(); it++)
    {
        A_B.insert(*it);
        for(set<int>::iterator it2 = A.begin(); it2 != A.end(); it2++)
        {
            if(*it2 == *it) A_B.erase(*it);
        }
    }
    for(set<int>::iterator it = A_B.begin(); it != A_B.end(); it++)
    {
        
    }
    return 0;
}