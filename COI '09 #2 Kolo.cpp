#include <bits/stdc++.h>
#include <string>
using namespace std;
//consider the case that a letter is in two places at once
string arr[27];
string y = "";
int main() {
  size_t yes;
  bool a = true;
  int wheel;
  cin>>wheel;
  int spin;
  cin>>spin;
  int move;
  string letter;
  int pos = wheel-1;
  for(int i=0;i<wheel;i++){
    arr[i]="?";
  }
  while(spin--){
    cin>>move>>letter;
    if(a){
      pos -= move;
      while (pos< 0){ 
        pos+=wheel;
      }
      if (arr[pos]==letter){
        continue;
      }
      else if(arr[pos]=="?"){
        if ((yes = y.find(letter))== string::npos){
          arr[pos]=letter;
          y.append(arr[pos]);
        }
        else{
          a=false;
        }
      }
      else{
        a=false;
      }
    }
  }
  if(a){
    for(int i =0;i<wheel;i++){
      cout<<arr[pos];
      pos++;
      if(pos>wheel-1){
        pos-=wheel;
      }else{
      }
    }
  }else{
    cout<<"!"<<endl;
  }
  return 0;
} 