#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int flag_colors;
	cin >> flag_colors;
	string answer (""); 

	for(int i = 97 ; i <= (96+flag_colors); ++i){
		string new_flag_color (1, i);
		answer = answer + new_flag_color + answer; 
	}
	if(answer.size() > pow(10,5)){
		answer.resize(pow(10,5));
	}
	cout << answer;
	return 0;
}


