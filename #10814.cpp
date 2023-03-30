// 나이순 정렬
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
struct Person
{
    int age;
    string name;
};

bool cmp(const Person& a, const Person& b)
{
    if(a.age != b.age) return a.age < b.age;
    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int N;
    cin >> N;
    Person member[100001];

    for(int i = 0; i < N; i++)
    {
        cin >> member[i].age >> member[i].name;
    }

    stable_sort(member, member+N, cmp); // stable 정렬: 첫번째 원소가 같을 경우 두번째 원소의 입력 순서대로 출력

    for(int i = 0; i < N; i++)
    {
        cout << member[i].age << " " << member[i].name << "\n";
    }

    return 0;
}