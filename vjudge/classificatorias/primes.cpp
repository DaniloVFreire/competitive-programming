#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool prime(ll n){
  if(n == 2) return true;
  for(int i = 2; i < sqrt(n)+1; ++i){
    if(n % i == 0){
      return false;
    }
  }
  return true;
}
int main(){
  for(ll i = 1; i <= 50000; ++i){
      if(prime(i)){
        cout<< i <<",";
      }
  }
  return 0;
}