// 계단 오르기
#include <iostream>
#include <algorithm>
using namespace std;

int score[301];
int max_score[301];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int stairs;
    cin >> stairs;
    
    for(int i = 1; i <= stairs; i++) cin >> score[i];

    max_score[1] = score[1];
    max_score[2] = score[1] + score[2];
    max_score[3] = max(score[1] + score[3], score[2] + score[3]);
    
    for(int i = 4; i <= stairs; i++)
    {
        max_score[i] = max(max_score[i-2] + score[i], max_score[i-3] + score[i-1] + score[i]);
    }
    
    cout << max_score[stairs] << "\n";

    return 0;
}