// 보물섬
#include <iostream>
#include <queue>
using namespace std;

int h, w;
char map[51][51]; //지도
bool visited[51][51]; //방문 표시
int path[51][51]; //경로 
int dy[4] = {0, 0, -1, 1};
int dx[4] = {-1, 1, 0, 0};
queue<pair <int, int> > q;
int max_len; //경로 중 최댓값
 
/* 경로 배열의 최댓값을 리턴하는 bfs */
int bfs(int y, int x) 
{
    path[y][x] = 1;
    visited[y][x] = true;
    q.push(make_pair(y, x));
 
    while(!q.empty()) 
    {
        y = q.front().first;
        x = q.front().second;
        q.pop();
 
        for(int i = 0; i < 4; i++) 
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
 
            if(ny < 0 || nx < 0 || ny >= h || nx >= w)
                continue;
            if(map[ny][nx] == 'L' && !visited[ny][nx]) 
            {
                visited[ny][nx] = true;
                path[ny][nx] = path[y][x] + 1;
                q.push(make_pair(ny, nx));
                if(max_len < path[ny][nx])
                    max_len = path[ny][nx];
            }
        }
    }
    return max_len - 1;
}
 
/* 초기화 */
void reset() 
{
    for(int i = 0; i < h; i++) 
    {
        for(int j = 0; j < w; j++) 
        {
            visited[i][j] = 0;
            path[i][j] = 0;
        }
    }
    max_len = 0;
}
 
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> h >> w;
    for(int i = 0; i < h; i++) 
    {
        for(int j = 0; j < w; j++) 
            cin >> map[i][j];
    }
 
    /* 모든 'L'에 대해 bfs 실행 -> 최댓값이 정답 */
    int ans = 0; 
    for (int i = 0; i < h; i++) 
    {
        for (int j = 0; j < w; j++) 
        {
            if (map[i][j] == 'L') 
            {
                int temp = bfs(i, j);
                if (temp > ans)
                    ans = temp;
                reset();
            }
        }
    }
 
    cout << ans << "\n";
    
    return 0;
}
