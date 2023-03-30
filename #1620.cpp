// 나는야 포켓몬 마스터 이다솜
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int N, M; //포켓몬의 개수, 맞춰야 하는 문제의 개수
    string input; //입력받기용
    map<string, int> pokemon;
    vector<string> name; 
    vector<string> res; //맞춰야 하는 문제 내용
    cin >> N >> M;
    for(int i = 1; i <= N; i++)
    {
        cin >> input;
        name.push_back(input);
        pokemon.insert(make_pair(input, i));
    }
    for(int i = 0; i < M; i++)
    {
        cin >> input;
        if(input[0] >= 65 && input[0] <= 90) //포켓몬의 이름이 주어진 경우
        {
            res.push_back(to_string(pokemon[input])); //번호 -> string
        }
        else{ //번호가 주어진 경우
            res.push_back(name[stoi(input) - 1]); //string -> 번호
        }
    }
    for(int i = 0; i < res.size(); i++)
    {
        cout << res[i] << "\n";
    }
    return 0;
}