#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  int box_quantity, currency = 100, box, best_currency = 100;
  cin>> box_quantity;
  for(int i = 0; i<box_quantity;++i){
    cin>> box;
    currency +=box;
    if(best_currency<currency){
      best_currency = currency;
    }
  }
  cout<<best_currency;

  return 0;
}