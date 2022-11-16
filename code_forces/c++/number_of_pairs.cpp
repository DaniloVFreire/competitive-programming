#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  int q;
  cin >> q;
  while(q--){
      int n, l, r;
      cin >> n >> l >> r;
      vector<int> v(n);
      for(int i = 0; i < n; i++){
        cin >> v[i];
        int answer = 0;
        for(int i = 0; i < n; i++){
          for(int j = i+1; j < n; j++){
            int soma = v[i] + v[j];
            if(soma>= l && soma <= r)
              answer++;
          }
        }
        cout << answer << endl;
      }
  }
  return 0;
}