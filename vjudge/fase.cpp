#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  vector<short> scores_counter;
  scores_counter.resize(1001, 0);
  set<short, greater<short>> scores;
  short quantity_players, quantity_podium, player, podium = 0;

  cin >> quantity_players>>quantity_podium;
  while(quantity_players>0){
    cin>> player;
    scores.insert(player);
    scores_counter[player]++;
    --quantity_players;
  }
  set<short, greater<short>>::iterator itr;
  for(itr = scores.begin(); itr!=scores.end()&&quantity_podium>podium;itr++){
    podium += scores_counter[*itr];
  }
  cout<<podium;

  return 0;
}