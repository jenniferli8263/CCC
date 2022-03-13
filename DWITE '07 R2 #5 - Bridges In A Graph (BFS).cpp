#include <bits/stdc++.h>
using namespace std;


int main() {
  int t=5;
  while(t--){
    int n,m;
    cin >> n >> m;
    vector<pair<int, int>> edge(m);

    for (int i = 0; i < m; i++){
      int x, y;
      cin >> x >> y;
      edge[i] = {x, y};
    }
    int cnt = 0;
    for (int i = 0; i < m; i++){
      vector<vector<int>> adj(n + 1);
      vector<bool> vis(n + 1);
      for (int j = 0; j < m; j++){
        if (i != j){
          int x = edge[j].first, y = edge[j].second;
          adj[x].push_back(y);
          adj[y].push_back(x);
        }
      }
      queue<int> q;
      q.push(1);
      vis[1] = true;
      while (!q.empty()){
        int cur = q.front(); q.pop();
        for (int nxt : adj[cur]){
          if(!vis[nxt]){
            q.push(nxt);
            vis[nxt] = true;
          }
        }
      }
      for (int i = 1; i <= n; i++){
        if(!vis[i]){
          cnt++;
          break;
        }
      }
    }
    cout << cnt << endl;
  }
}