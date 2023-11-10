// 치즈
#include <iostream>
#include <queue>
using namespace std;

int arr[105][105];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
int n, m, ans;
queue<pair<int,int> > q;

void dfs(int x, int y)
{
	if(arr[x][y] == 0)
		arr[x][y] = -1;
	else 
        return;
	
	for(int i = 0; i < 4; i++)
    {
		int nx = x + dx[i];
		int ny = y + dy[i];
		
		if(nx >= 1 && nx <= n && ny >= 1 && ny <= m)
			dfs(nx, ny);
	}
	
	return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	cin >> n >> m;
	
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
			cin >> arr[i][j];
	
	dfs(1, 1);
	while(1)
    {
		for(int i = 1; i <= n; i++)
			for(int j = 1;j <= m; j++)
				if(arr[i][j] == 1)
                {	
					int cnt = 0;
					for(int k = 0; k < 4; k++)
                    {
						int nx = i + dx[k];
						int ny = j + dy[k];

						if(arr[nx][ny] == -1) 
                            cnt++;
					}

					if(cnt >= 2)
						q.push(make_pair(i, j));
				}
		
		if(q.empty()) 
            break;
		
		while(!q.empty())
        {
			int x = q.front().first;
			int y = q.front().second;
			q.pop();
			
			arr[x][y] = -1;
			
			for(int i = 0; i < 4; i++)
            {
				int nx = x + dx[i];
				int ny = y + dy[i];
				
				if(arr[nx][ny] == 0)
					dfs(nx,ny);
			}
		}
		
		ans++;
	}
	
    cout << ans << "\n";
	
	return 0;
}