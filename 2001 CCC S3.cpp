#include <bits/stdc++.h> 
using namespace std;
map<char,vector<char>> adj;
vector<string> rds;
vector<string> print;
int main() {
  string x;
  char ind,ind1;
  cin>>x;
  while(x!="**"){
    ind=x[0];
    ind1=x[1];
    adj[ind].push_back(ind1);
    adj[ind1].push_back(ind);
    rds.push_back(x);
    cin>>x;
  }
  queue<char> q;

  for(int i=0;i<rds.size();i++){
    map<char,bool> vis;
    ind=rds[i][0];
    ind1=rds[i][1];
    q.push('A');
    vis['A']=true;
    while(!q.empty()){
      char cur = q.front(); q.pop();
      for (char nxt : adj[cur]){
        if (!vis[nxt]){

          if(cur==ind && nxt==ind1){

            continue;
          }
          else if(cur== ind1 &&nxt==ind){

            continue;
          }
          else{
            q.push(nxt);
            vis[nxt] = true;
          }
        }
      }
    }
    if(vis['B']==false){
      print.push_back(rds[i]);
    }
  }
  for(int i = 0;i<print.size();i++){
    cout<<print[i]<<endl;
  }
  cout<<"There are "<<print.size()<<" disconnecting roads."<<endl;
} 


