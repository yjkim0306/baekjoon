// 너의 평점은
#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cout.precision(7);
    double sum = 0.0;
    int score = 0;
    string str[20][3];
    for(int i = 0; i < 20; i++)
    {
        for(int j = 0; j < 3; j++)
            cin >> str[i][j];
    }

    for(int i = 0; i < 20; i++)
        score += stoi(str[i][1]);

    for(int i = 0; i < 20; i++)
    {
        if(str[i][2] == "A+")
           sum += stoi(str[i][1]) * 4.5;
        else if(str[i][2] == "A0")
            sum += stoi(str[i][1]) * 4.0;
        else if(str[i][2] == "B+")
            sum += stoi(str[i][1]) * 3.5;
        else if(str[i][2] == "B0")
            sum += stoi(str[i][1]) * 3.0;
        else if(str[i][2] == "C+")
            sum += stoi(str[i][1]) * 2.5;
        else if(str[i][2] == "C0")
            sum += stoi(str[i][1]) * 2.0;
        else if(str[i][2] == "D+")
            sum += stoi(str[i][1]) * 1.5;
        else if(str[i][2] == "D0")
            sum += stoi(str[i][1]) * 1.0;
        else if(str[i][2] == "F")
            sum += stoi(str[i][1]) * 0.0;
        else if(str[i][2] == "P")
            score -= stoi(str[i][1]);
    }

    cout << sum / score << "\n";

    return 0;
}