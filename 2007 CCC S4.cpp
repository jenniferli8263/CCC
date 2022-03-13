#include <bits/stdc++.h> 
using namespace std;
vector<int> adj[100005];
int paths[100005];
int main() {
  int n,x,y;
  cin>>n;
  cin>>x>>y;
  while(x!=0){
    adj[y].push_back(x);
    cin>>x>>y;
  }
  paths[n]=1;
  for(int i=n;i>0;i--){
    for(int cur : adj[i]){
      paths[cur]+=paths[i];
    }
  } 
  cout<<paths[1]<<endl;
}