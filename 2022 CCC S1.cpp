#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  int c=0;
  cin>>x;
  int four, five;
  four = floor(x/4);
  five = floor(x/5);
  for(int i=0;i<=four;i++){
    if((x-i*4)%5==0){
      c++;
    }
  }
  cout<<c<<endl;
}
