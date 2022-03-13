#include <bits/stdc++.h>
using namespace std;

int main() {
  int q;
  int n;
  cin>>q>>n;
  int dmoj[n];
  int peg[n];
  int s=0;
  for(int i = 0;i<n;i++){
    cin>>dmoj[i];
  }
  for(int j=0;j<n;j++){
    cin>>peg[j];
  }
  sort(dmoj,dmoj+n);
  sort(peg,peg+n);
  if(q==1){
    for (int i=0;i<n;i++){
      s+=max(dmoj[i],peg[i]);
    }
  }else{
    reverse(peg,peg+n);
    for (int j=0;j<n;j++){
      s+=max(dmoj[j],peg[j]);
    }
  }
  cout<<s<<endl;
} 