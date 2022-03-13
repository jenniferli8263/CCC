//RTE on last batch

#include <bits/stdc++.h>
using namespace std;

bool rows[1000005];
bool col[1000005];
bool arr[10000][10000];
int main() {
  int n,m,k,x;
  cin>>m>>n>>k;
  char d;
  while(k--){
    cin>>d>>x;
    if(d=='R'){
      if(rows[x]){
        rows[x]=false;
      }
      else{
        rows[x]=true;
      }
    }
    else{
     if(col[x]){
        col[x]=false;
      }
      else{
        col[x]=true;
      }
    }
  }
  for(int i=1;i<=m;i++){
    if(rows[i]){
      for(int j=1;j<=n;j++){
        if(arr[i][j]){
          arr[i][j]=false;
        }
        else{
          arr[i][j]=true;
        }
      }
    }
  }
  for(int i=1;i<=n;i++){
    if(col[i]){
      for(int j=1;j<=n;j++){
        if(arr[j][i]){
          arr[j][i]=false;
        }
        else{
          arr[j][i]=true;
        }
      }
    }
  }
  int c=0;
  for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
      if(arr[i][j]){
        c++;
      }
    }
  }
  cout<<c<<endl;
}
