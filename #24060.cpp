// 알고리즘 수업 - 병합 정렬 1
#include <iostream>
using namespace std;
int inputcnt = 0;
void merge_sort(int* arr, int left, int mid, int right);
void merge(int* arr, int p, int q, int r, int right);

void merge_sort(int* arr, int left, int mid, int right)
{
    int p = left;
    int r = mid;
    int q;
    if(p<r)
    {
        q = (p+r)/2;
        merge_sort(arr, p, q, right);
        merge_sort(arr, q+1, r, right);
        merge(arr, p, q, r, right);
    }
}

void merge(int* arr, int p, int q, int r, int right)
{
    int tmp[r+2];
    int i = p, j = q+1, t = 1;
    while(i<=q && j <= r)
    {
        if(arr[i] <= arr[j]) tmp[t++] = arr[i++];
        else tmp[t++] = arr[j++];
    }
    while(i <= q) tmp[t++] = arr[i++];
    while(j <= r) tmp[t++] = arr[j++];
    i = p, t = 1;
    while(i <= r)
    {
        arr[i++] = tmp[t++];
        if(++inputcnt == right) cout << tmp[t-1];
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    int N, K; // 배열의 크기, 저장 횟수
    cin >> N >> K;
    int* arr;
    arr = new int[N];
    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    merge_sort(arr, 0, N-1, K);
    if(inputcnt < K) cout << "-1";

    delete[] arr;
    return 0;
}