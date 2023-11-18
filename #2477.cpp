// 참외밭
#include <iostream>
using namespace std;

pair<int, int> len[12];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int k, dir, length, big_area, small_area;
    cin >> k;

    for(int i = 0; i < 6; i++)
    {
        cin >> dir >> length;
        len[i] = len[i + 6] = make_pair(dir, length);
    }

    for(int i = 3; i < 12; i++)
    {
        if(len[i].first == len[i - 2].first && len[i - 1].first == len[i - 3].first)
        {
            big_area = len[i + 1].second * len[i + 2].second;
            small_area = len[i - 1].second * len[i - 2].second;
            break;
        }
    }

    cout << k * (big_area - small_area) << "\n";
    
    return 0;
}