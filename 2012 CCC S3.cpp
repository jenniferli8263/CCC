#include <bits/stdc++.h>
using namespace std;
int vis[2000005];
vector<int> ties1;
vector<int> ties2;
int main() {
  int n,x;
  cin>>n;
  pair<int,int> maxn,lmax;
  maxn={0,0};
  lmax={0,0};//first is repetition, second is num
  for(int i=0;i<n;i++){
    cin>>x;
    vis[x]++;
  }
  for(int i=1;i<=1000;i++){
    if(vis[i]>maxn.first){
      lmax.first=maxn.first;
      lmax.second=maxn.second;
      ties2.clear();
      ties2.push_back(maxn.second);
      maxn.first=vis[i];
      maxn.second=i;
      ties1.clear();
      ties1.push_back(i);
    }
    else if (vis[i]==maxn.first){
      ties1.push_back(i);
    }
    else if(vis[i]<maxn.first){
      if (vis[i]>lmax.first){
        lmax.first=vis[i];
        lmax.second=i;
        ties2.clear();
      }
      if(vis[i]==lmax.first){
        ties2.push_back(i);
      }
    }
  }
  int s1 = ties1.size();
  int s2=ties2.size();
  
  if(s1==1&&s2==1){
    cout<<abs(maxn.second-lmax.second);
    return 0;
  }
  int high = 0;
  if(s1!=1){
    for(int i:ties1){
      if(i>high){
        high=i;
      }
    }
    int low=high;
    for(int j:ties1){
      if(j<low){
        low=j;
      }
    }
    cout<<abs(high-low)<<endl;
    return 0;
  }
  int maxdiff=0;
  if(s2!=1 && s1==1){
    for(int i:ties2){
      if(abs(maxn.second-i)>maxdiff){
        maxdiff=abs(maxn.second-i);
      }
    }
    cout<<maxdiff<<endl;
    return 0;
  }
}