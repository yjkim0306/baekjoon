// K번째 수
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long n, k;
long long low, high, mid;
long long cnt;

long long count(long long x)
{
	long long sum = 0;
	for (int i = 1; i <= n; i++)
		sum += min(x / i, n);

	return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	cin >> n >> k;

	k = min((long long)1000000000, k);

	low = 1;
	high = n * n;

	while (low <= high)
	{
		mid = (low + high) / 2;

		cnt = count(mid); // Mid보다 작거나 같은 수들의 개수

		if (cnt >= k)
		{
			// Mid보다 작거나 같은 수들의 개수가 목표 인덱스보다 많으므로
			// 이므로 Mid값을 더 작게 찍어줘야 합니다.
			// 따라서 High값 조정
			high = mid - 1;
		}
		else
		{
			// Mid보다 작거나 같은 수들의 개수가 목표 인덱스보다 작으므로
			// 이므로 Mid값을 더 크게 찍어줘야 합니다.
			// 따라서 Low값 조정
			low = mid + 1;
		}
	}
	cout << low << "\n";

    return 0;
}