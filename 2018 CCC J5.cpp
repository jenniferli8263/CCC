#include <bits/stdc++.h> 
using namespace std;
vector<int> adj[10005];
vector<int> endpage;
bool vis[10005];
int dist[10005];
int main() {
  int n,m,a;
  cin >> n;
  for(int i=1; i<=n; i++){
    cin>>m;
    if(m!=0){
      for(int j=0; j<m;j++){
        cin>>a;
        adj[i].push_back(a);
      }
    }else{
      endpage.push_back(i);
      adj[i].push_back(i);
    }
  }
  queue<int> q;
  q.push(1);
  vis[1]=true;
  dist[1]=1;
  while(!q.empty()){
    int cur = q.front(); q.pop();
    for (int nxt : adj[cur]){
      if (!vis[nxt]){
        q.push(nxt);
        dist[nxt] = dist[cur] + 1;
        vis[nxt] = true;
      }
    }
  } 

  bool y = true;
  int d = 0x3f3f3f3f;
  for (int i = 1; i <= n; i++){
    if (!vis[i]) y = false;
  }
  if (y){
    cout<<"Y"<<endl;
  }
  else{
    cout<<"N"<<endl;
  }
  for (int i : endpage){
    if (dist[i] < d && dist[i] != 0){
      d = dist[i];
    }
  }
  cout <<d << endl;
} 
