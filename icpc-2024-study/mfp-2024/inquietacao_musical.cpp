#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int clines;
	cin >> clines;
	
	string l;
	string sl;
	
	vector<vector<string>> lyrics(clines, vector<string>());

	for(int i = 0; i < clines; ++i){
		string binput;
		getline(cin, binput);
		stringstream input(binput);
		while(getline(input, sl, ' ')){
			lyrics[i].push_back(sl);
		}
	}
	int cwlines;
	cin >> cwlines;
	unordered_map<string, int>words;
	string word;
	for(int i = 0; i < cwlines ; ++i){
		cin >> word;
		cin >> words[word]; 
	}
	
	for(int i = 0; i < lyrics.size(); ++i){
		for(auto & iterator2 : lyrics[i]){
			unordered_map<string, int>::const_iterator sample;
			cout << iterator2 << " ";
			sample = words.find (iterator2);
			cout << sample << "\n";
		}
	}
	return 0;
}
