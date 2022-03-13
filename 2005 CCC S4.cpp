#include <bits/stdc++.h>
using namespace std;
map<string,vector<string>> adj; //person, related ppl
map<string,bool> vis;
map<string,int>dis;
vector<string> msg;

void dfs(string cur, int d){
  if (vis[cur]) return;
  vis[cur] = true;
  dis[cur] = d;
  for (string nxt : adj[cur]){
    dfs(nxt, d + 1);
  }
}

int main() {
  int l;
  cin>>l;
  while(l--){
    int n;
    cin>>n;
    string x,y;
    int t=0;
    for(int i=0;i<n/2;i++){
      cin>>x>>y;
      adj[x].push_back(y);
      adj[y].push_back(x);
      msg.push_back(x);
      msg.push_back(y);
    }
    int a = msg.size()-1;
    dfs(msg[a],0);
    int maxDis = -1;
    for (string i : msg){ 
      if (maxDis < dis[i]){
        maxDis = dis[i];
      }
    }
    t= n*10 - maxDis*20;
    cout<<t<<endl;
    adj.clear();
    vis.clear();
    dis.clear();
    msg.clear();
  }
}
