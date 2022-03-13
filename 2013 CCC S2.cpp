//WA on Test Case 6
#include <bits/stdc++.h> 
using namespace std;
int arr[1000005];
int main() {
  int w,n,x;
  int c=0;
  int sum=0;
  cin>>w>>n;
  for(int i=1; i<=n; i++){
    cin>>x;
    arr[i]=x;
  }
  for(int i=1; i<=n;i++){
    if (c>=4){
      sum-=arr[i-4];
    }
    sum+=arr[i];
    c++;
    if (sum>w){
      cout<<i-1<<endl;
      break;
    }
  }
}