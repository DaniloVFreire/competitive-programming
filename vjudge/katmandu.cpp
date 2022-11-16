#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  int sleep_time, flight_duration, food_counter,
   greatest_time_interval = 0, previous_time = 0, actual_time = 0, time_interval;

  cin>>sleep_time>>flight_duration>>food_counter;
  for(int i =0; i<=food_counter;++i){
    cin>>actual_time;
    time_interval = actual_time-previous_time;
    if(time_interval>greatest_time_interval){
      greatest_time_interval=time_interval;
    }
    previous_time = actual_time;
  }
  time_interval = flight_duration-previous_time;
  if(time_interval>greatest_time_interval){
      greatest_time_interval=time_interval;
  }
  previous_time = actual_time;
  if(sleep_time<=greatest_time_interval){
    cout<<'Y'<<endl;
  }
  else{
    cout<<'N'<<endl;
  }
  return 0;
}