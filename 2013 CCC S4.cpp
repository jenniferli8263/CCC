#include <bits/stdc++.h> 
using namespace std;

vector<int> adj[1000005];
bool vis[1000005];
bool vis2[1000005];
int main() {
  int n,m,x,y,p,hee;
  cin>>n>>m;
  while(m--){
    cin>>x>>y;
    adj[x].push_back(y);
  }
  cin>>p>>hee;
  queue<int> q;
  vis[p]=true;
  q.push(p);
  while(!q.empty()){
    int cur = q.front(); q.pop();
    for (int nxt : adj[cur]){
      if (!vis[nxt]){
        q.push(nxt);
        vis[nxt] = true;
      }
    }
  } 
  if (vis[hee]==true){
    cout<<"yes"<<endl;
    return 0;
  }
  q.push(hee);

  while(!q.empty()){
    int cur = q.front(); q.pop();
    for (int nxt : adj[cur]){
      if (!vis2[nxt]){
        q.push(nxt);
        vis2[nxt] = true;
      }
    }
  } 
  if (vis2[p]==true){
    cout<<"no"<<endl;
  }else{
    cout<<"unknown"<<endl;
  }
} 