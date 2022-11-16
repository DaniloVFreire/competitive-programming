#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  int tea_value,tea_guess, right_guesses = 0;
  cin >> tea_value;
  for(int i = 0; i<5; ++i){
    cin>> tea_guess;
    if(tea_guess == tea_value){
      right_guesses++;
    }
  }
  cout<< right_guesses;
  return 0;
}