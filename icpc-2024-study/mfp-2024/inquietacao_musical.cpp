#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int clines;
	cin >> clines;
	
	string l;
	string sl;
	
	vector<vector<string>> lyrics(clines, vector<string>());

  cin.ignore();
	for(int i = 0; i < clines; ++i){
		string binput;
		getline(cin, binput);
    //cout << "line: " << i+1 << "\n";
    //cout << binput << "\n";
		stringstream input(binput);
		while(getline(input, sl, ' ')){
			lyrics[i].push_back(sl);
		}
	}
	int cwlines;
	cin >> cwlines;
  //cout << cwlines;
	unordered_map<string, int>words;
	string word;
  int points;
	for(int i = 0; i < cwlines ; ++i){
    //cout << i << "\n";
		cin >> word;
    cin >> points;
    //cout << word << " " << points << "\n";
    words[word] = points;
    unordered_map<string, int>::const_iterator found_or_end = words.find(word);
    //cout << found_or_end->first << " " << found_or_end->second << "\n";
	}
	
  //cout << "-------------" << "\n";
  pair<int, int> best_line_and_score(0, 0);
  int line_score = 0;
  int total_score = 0;
	for(int i = 0; i < lyrics.size(); ++i){
    line_score = 0;
		for(string & current_word : lyrics[i]){
			unordered_map<string, int>::const_iterator found_or_end = words.find(current_word);
      //cout << current_word<<"\n";
      if(found_or_end != words.end()){
        //cout << found_or_end->first << " " << found_or_end -> second << "\n";
        line_score += found_or_end->second;
        total_score += found_or_end-> second;
      }
		}
    if(line_score >= best_line_and_score.second){
      best_line_and_score = make_pair(i+1, line_score);
    }
	}
  cout << total_score << " " << best_line_and_score.first << "\n";
	return 0;
}
