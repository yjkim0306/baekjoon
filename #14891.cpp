// 톱니바퀴
#include <iostream>
#include <cstring>
using namespace std;

string gear[4];
int isRotate[4];

void init()
{
    for(int i = 0; i < 4; i++)
        isRotate[i] = 0;
}

void move(int idx, int clock)
{
    if(clock == 1)
        gear[idx] = gear[idx].substr(7) + gear[idx].substr(0, 7);
    else if(clock == -1)
        gear[idx] = gear[idx].substr(1, 7) + gear[idx].substr(0, 1);
}

void left_check(int idx, int clock)
{
    if(idx <= 0) 
        return;
    if(gear[idx][6] != gear[idx - 1][2])
    {
        isRotate[idx - 1] = clock * -1;
        left_check(idx - 1, clock * -1);
    }
}

void right_check(int idx, int clock)
{
    if(idx >= 3)
        return;
    if(gear[idx][2] != gear[idx + 1][6])
    {
        isRotate[idx + 1] = clock * -1;
        right_check(idx + 1, clock * -1);
    }
}

void check(int idx, int clock)
{
    isRotate[idx] = clock;
    left_check(idx, clock);
    right_check(idx, clock);

    for(int i = 0; i < 4; i++)
        move(i, isRotate[i]);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int res = 0;

    for(int i = 0; i < 4; i++)
        cin >> gear[i];
    
    int k;
    int num, dir;

    cin >> k;

    for(int i = 0; i < k; i++)
    {
        cin >> num >> dir;
        init();
        check(num - 1, dir);
    }
    int mul = 1;
    for(int i = 0; i < 4; i++)
    {
        res += (gear[i][0] - '0') * mul;
        mul *= 2;
    }

    cout << res << "\n";

    return 0;
}