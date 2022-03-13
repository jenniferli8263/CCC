#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int height[100000000];
int width[100000000];
int main() {
  int n;
  cin>>n;
  int h;
  int w;
  double a;
  for (int i= 0; i<n+1; i++){
    cin>>h;
    height[i]=h;
  }
  for(int j =0;j<n;j++){
    cin>>w;
    width[j] = w;
  }
  for (int i = 0; i<n; i++){
    a+=(double) (height[i]+height[i+1])*width[i]/2;
  }
  cout<<fixed<<a<<endl;

} 