// 택시 기하학
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int r;
    double PI = 3.14159265359;
    cin >> r;
    double EuclidCircle = pow(r, 2) * PI;
    double TaxiCircle = pow(r, 2) * 2;
    printf("%.6f\n", EuclidCircle);
    printf("%.6f\n", TaxiCircle);

    return 0;
}