#include<cstdio>
#include<queue>

using namespace std;

int map[105][105];
int visit[105][105];

int main()
{
  int N, M;
  scanf("%d %d", &N, &M);
  for(int i=1; i<=N; i++)
    {
      for(int j=1; j<=M; j++)
        {
          scanf("%1d", &map[i][j]);
        }
    }
  queue<pair<int, int>> q;
  q.push({1, 1});
  visit[1][1]=1;
  while(!q.empty())
    {
      int x=q.front().first, y=q.front().second;
      q.pop();
      if(map[x-1][y]&&!visit[x-1][y])
      {
        q.push({x-1, y});
        visit[x-1][y] = visit[x][y]+1;
      }
      if(map[x+1][y]&&!visit[x+1][y])
      {
        q.push({x+1, y});
        visit[x+1][y] = visit[x][y]+1;
      }
      if(map[x][y-1]&&!visit[x][y-1])
      {
        q.push({x, y-1});
        visit[x][y-1] = visit[x][y]+1;
      }
      if(map[x][y+1]&&!visit[x][y+1])
      {
        q.push({x, y+1});
        visit[x][y+1] = visit[x][y]+1;
      }
      
    }
  printf("%d", visit[N][M]);
}