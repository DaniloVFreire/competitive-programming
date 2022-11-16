#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  short player_a, player_b,player_c;
  cin>>player_a>>player_b>>player_c;
  if(player_a!=player_b&&player_b==player_c){
    cout<<'A'<<endl;
  }
  else if(player_b!=player_a&&player_a==player_c){
    cout<<'B'<<endl;
  }
  else if(player_c!=player_b&&player_b==player_a){
    cout<<'C'<<endl;
  }
  else{
    cout<<'*'<<endl;
  }
  return 0; 
}