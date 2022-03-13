
#include <bits/stdc++.h> 
using namespace std;
int main() {
  long long n,k,a,b;
  long long tot=0;
  long long rex=0;
  cin>>n>>k;
  while(n--){
    cin>>a>>b;
    tot+=a*b;
    tot=tot%k;
  }
  rex=tot%k;
  cout<<rex<<endl;
} 