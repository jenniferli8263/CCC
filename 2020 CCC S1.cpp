#include <iostream>
#include <bits/stdc++.h>
using namespace std;

pair <int,int>arr[1000000];

int main() {
  int n;
  cin>>n;
  int t;
  int d;
  double s = 0;
  double news;
  for(int i=0;i<n;i++){
    cin>>t>>d;
    arr[i]={t,d};
  }
  sort(arr,arr+n);
  
  for(int i = 0;i<n-1;i++){
    news = (double)(abs(arr[i+1].second-arr[i].second))/(arr[i+1].first-arr[i].first);

    if(news>s){
      s = news;
    }else{
      continue;
    }
  }
  cout<<s<<endl;
} 