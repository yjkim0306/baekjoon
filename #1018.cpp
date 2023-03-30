// 체스판 다시 칠하기
#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
using namespace std;
string WB[8] = 
{
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};

string BW[8] = 
{
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};

string board[50];
int Wstart(int x, int y) //흰색으로 시작하는 경우
{
    int cnt = 0;
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(board[x+i][y+j] != WB[i][j]) cnt++; //같지 않은 경우 ++
        }
    }
    return cnt;
}

int Bstart(int x, int y) //검은색으로 시작하는 경우
{
    int cnt = 0;
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(board[x+i][y+j] != BW[i][j]) cnt++; //같지 않은 경우 ++
        }
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int res = 2500, cnt; //res값 초기화해줘야 한다
    pair<int, int> v;
    cin >> v.first >> v.second;
    for(int i = 0; i < v.first; i++)
    {
        cin >> board[i];
    }
    for(int i = 0; i + 8 <= v.first; i++) //8*8로 자르기 때문에
    {
        for(int j = 0; j + 8 <= v.second; j++)
        {
            int tmp;
            tmp = min(Wstart(i,j), Bstart(i,j)); //둘 중 더 적은 경우의 수 선택
            if(tmp < res) //더 적은 경우의 수가 나오면 res값 변경
            {
                res = tmp;
            }
        }
    }
    cout << res << "\n";
    return 0;

}