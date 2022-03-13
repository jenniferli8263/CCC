#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int>x;

int main() {
  int tmp;
  int n;
  cin>>n;
  int a;
  int s=0;
  while(n--){
    cin>>a;
    x.push_back(a);
  }
  sort(x.begin(),x.end());
  while(x.size()!=0){
    tmp = x.back();
    x.pop_back();
    s+=tmp;
    for(int i=x.size()-1;i>=0;i--){
      if(x[i] == tmp){
        continue;
      }else{
        tmp = x[i];
        x.erase(x.begin()+i);
      }
    }
  }
  cout<<s<<endl;
} 