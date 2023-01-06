#include <cstdio>
#include <stack>
#include <queue>

using namespace std;

int edge[1005][1005];
int visited[1005];

int main() {
  int N,M,V;
  scanf("%d %d %d",&N,&M,&V);
  for(int i=0;i<M;i++){
    int a,b;
    scanf("%d %d",&a,&b);
    edge[a][b]=edge[b][a]=1;
  }
  //DFS
  stack<int> s;
  s.push(V);
  while(!s.empty()){
    int t=s.top();
    s.pop();
    if(visited[t])
      continue;
    printf("%d ",t);
    visited[t]=1;
    for(int i=N;i>=1;i--){
      if(visited[i])
        continue;
      if(edge[t][i]){
          s.push(i);
        }
    }
  }
  for(int i=1;i<=N;i++)
    visited[i]=0;
  printf("\n");
  //BFS
  queue<int> q;
  q.push(V);
  while(!q.empty()){
    int t=q.front();
    q.pop();
    if(visited[t])
      continue;
    printf("%d ",t);
    visited[t]=1;
    for(int i=1;i<=N;i++){
      if(visited[i])
        continue;
      if(edge[t][i])
        q.push(i);
    }
  }
}