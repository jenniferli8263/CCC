#include <bits/stdc++.h> 
using namespace std;

int main() {
  int r=1;
  double tmp;
  cin>>r;
  while(r!=0){
    int c=0;
    int a=r;
    for(int x=1;x<=r;x++){
      for(int y=a;y>0;y--){
        tmp=sqrt(x*x+y*y);
        if (tmp<=r){
          c+=y;
          a=y;
          break;
        }
      }
    }
    c=c*4+(4*r)+1;
    cout<<c<<endl;
    cin>>r;
  }
} 