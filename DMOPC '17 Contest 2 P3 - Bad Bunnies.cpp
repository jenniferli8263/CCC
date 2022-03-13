#include <bits/stdc++.h> 
using namespace std;
vector<int> adj[1000005];
bool vis[1000005];
int dist[1000005];
int previous[1000005];
int main() {
  queue<int> q;
  int n,r,a,b,x,y,rb;
  int c = 100000000;
  cin>>n>>r;
  for(int i=0;i<n-1;i++){
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  for(int i=0;i<r;i++){
    cin>>rb;
    vis[rb]=true;
    vis[rb] = true;
    q.push(rb);
  }

  cin>>x>>y;

  while (!q.empty()){
    int cur = q.front(); q.pop();
    for (int nxt : adj[cur]){
      if (!vis[nxt]){
        q.push(nxt);
        dist[nxt]=dist[cur]+1;
        vis[nxt] = true;
      }
    }
  } 
  q.push(x);
  for(int i=0; i<=n; i++){
    vis[i]=false;
  }
  vis[x]=true;
  previous[x]=-1;
  while(!q.empty()){
    int cur = q.front(); q.pop();
    for (int nxt : adj[cur]){
      if (!vis[nxt]){
        q.push(nxt);
        vis[nxt] = true;
        previous[nxt]=cur;
      }
    }
  }
  int t=y;
  while(t!=-1){
    if(dist[t]<c){
      c=dist[t];
    }
    t=previous[t];
  }
  cout<<c<<endl;
}

//bridges in a graph