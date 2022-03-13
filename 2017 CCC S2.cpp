#include <bits/stdc++.h>
#include <stdio.h>
#include <math.h>    
using namespace std;
int t[1000];
int main() {
  int n;
  int c=1;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>t[i];
  }
  sort(t,t+n);
  if (n%2==0){
    for(int i=0;i<n/2;i++){
      cout<<t[(n/2)-i-1]<<" ";
      cout<<t[(n/2)+i]<<" ";
    }
  }
  if(n%2==1){
    for(int i=n/2;i>=0;i--){
      cout<<t[i]<<" ";
      if(t[i+c]!=0){
        cout<<t[i+c]<<" ";
        c+=2;
      }
      
    }
  
  }
  return 0;
} 