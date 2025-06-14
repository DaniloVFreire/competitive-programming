#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ll cities;
  cin >> cities;
  ll monsters[cities+1];
  ll heroes[cities];
  ll result= 0;
  ll partial;

  for(int i=0; i < cities+1;++i){
    cin>> monsters[i];
  }
  for(int i=0; i< cities;++i){
    partial = 0;
    cin >> heroes[i];
    partial = heroes[i] - monsters[i];

    if(partial <= 0){
      result += heroes[i];
    } else {
      heroes[i] = partial;
      result += monsters[i];
      if(i + 1 <= cities){
        partial = heroes[i] - monsters[i+1];
        if(partial < 0){
          result += heroes[i];
          monsters[i+1] = partial * -1;
        } else {
          result += monsters[i+1];
          monsters[i+1] = 0;
        }
      }
    }
  }
  cout << result << "\n";

  return 0;
}