#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  int doors_quantity, value, result=0;
  cin>> doors_quantity;
  for(int i = 0; i<doors_quantity; ++i){
    cin>>value;
    if(value != 1){
      result++;
    }
  }
  cout<<result;
  return 0;
}