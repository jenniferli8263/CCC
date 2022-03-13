#include <bits/stdc++.h>
using namespace std;
int adj[55][55];//review
bool vis[100];
int dist[100];

int main() {
	int x,y;
  char a;
	cin>>a;
  for(int i=0;i<55;i++){
    for(int j=0;j<55;j++){
      adj[i][j]=0;
    }
  }
	while(a!='q'){
		if (a=='i'){
			cin>>x>>y;
			adj[x][y]=1;
			adj[y][x]=1;
		}
		else if(a=='d'){
			cin>>x>>y;
			adj[x][y] = 0;
			adj[y][x] = 0;
		}
		else if(a=='f'){
			cin>>x;
			int c=0;
			for(int i=1;i<=sizeof(adj[x])-1;i++){
				if(adj[x][i]==1){
          for(int j=1;j<=sizeof(adj[x])-1;j++){
            if(adj[i][j]!=0){
              c++;
            }
          }
				}
			}
			cout<<c<<endl;
		}
		else if(a=='n'){
			cin>>x;
      int c1=0;
      for(int i=1;i<=54;i++){
        if (adj[x][i]!=0){
          c1++;
        }
      }
			cout<<c1<<endl;
		}
		else{
			cin>>x>>y;
			queue<int> q;
      vis[x]=true;
      dist[x]=0;
      q.push(x);
			while (!q.empty()){
    		int cur = q.front(); q.pop();
    		for (int i=0;i<sizeof(adj[cur]);i++){
          int nxt=adj[cur][i];
    	  	if (!vis[nxt]&& nxt!=0){
       		 q.push(nxt);
       		 dist[i] = dist[cur] + 1;
       		 vis[i] = true;
      		}
        }
      } 
      cout<<dist[y]<<endl;
		}
		cin>>a;
	}
}

