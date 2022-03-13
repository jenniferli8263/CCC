#include <bits/stdc++.h>
using namespace std;

int jer[1000005];

int main(){
  int j,a,x;
  int c = 0;
  char s;
  char b;
  cin>>j>>a;
  for(int i = 1; i <= j;i++){
    cin>>b;
    if(b=='S'){
      jer[i]=1;
    }else if(b=='M'){
      jer[i]=2;
    }else{
      jer[i]=3;
    }
  }
  for(int i = 0; i < a; i++){
    cin>>s>>x;
    if(s=='S'){
      s=1;
    }else if(s=='M'){
      s=2;
    }else{
      s=3;
    }
    if(jer[x]>=s){
      jer[x]=0;
      c++;
    } 
    else{
      continue;
    }
  }
  cout<<c<<endl;
} 