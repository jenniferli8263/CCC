#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;
set<int> open;
int planes[maxn];
int main() {
  int g,p;
  int c=0;
  cin>>g>>p;
  for (int i = 0; i < p; i++) cin >> planes[i];

  for(int i=1;i<=g;i++){
    open.insert(-i);
  }

  for(int x : planes){
    auto it = open.lower_bound(-x);
    if (it == open.end()){
      cout << c << endl;
      return 0;
    }
    else{
      open.erase(it);
      c++;
    }
  }
  cout<<c<<endl;
}