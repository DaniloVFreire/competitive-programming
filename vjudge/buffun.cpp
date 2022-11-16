#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  int quant, input, buffun_try;
  char answer = 'S';
  cin>>quant;
  for(int i = 0; i<quant;++i)
  {
    cin>>input;
    if(i == 0)
    {
      buffun_try = input;
    }
    else
    {
      if(input>buffun_try)
      {
      answer = 'N';
      }
    }
  }
  cout<<answer;
  return 0;
}