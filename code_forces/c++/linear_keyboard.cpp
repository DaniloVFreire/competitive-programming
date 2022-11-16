#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  int q;
  cin>> q;
  while(q--){
    string keyboard;
    string word;
    cin >> keyboard >> word;
    map<char, int> pos;
    for(int i = 0; i < keyboard.size(); i++){
      pos[keyboard[i]] = i;
    }
    int answer = 0;
    for(int i = 1; i < word.size(); i++){
      answer += abs(pos[word[i-1]] - pos[word[i]]);
    }
    cout << answer << endl;
  }
  return 0;
}