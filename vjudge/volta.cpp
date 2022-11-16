#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  double fastest_time, slowest_time, distance_for_lap, answer;
  cin>> fastest_time>>slowest_time;
  distance_for_lap = (slowest_time/fastest_time) - 1;
  answer = 1/distance_for_lap;
  
  if((answer-int(answer)>0)){
    answer+=2;
  }
  else{
    answer+=1;
  }
  cout<<int(answer)<<endl;
  return 0;
}