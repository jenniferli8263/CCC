#include <bits/stdc++.h>
using namespace std;

bool monk(string x){
  size_t pos;
  while(x.length()>1){    
    if ((pos = x.find("ANA")) != string::npos){
      x.replace(pos, 3, "A");
    }else if ((pos = x.find("BAS")) != string::npos){
      x.replace(pos, 3, "A");
    }else return false;
    
  }
  return x == "A";
}

int main() {
  string a;
  cin>>a;
  while(a!="X"){
    cout<<(monk(a) ? "YES" : "NO")<<endl;
    cin>>a;
  }
  return 0;
} 