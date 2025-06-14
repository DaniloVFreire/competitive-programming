#include<bits/stdc++.h>
using namespace std;

int main(){
	int height, n_places, current;
	int result = 0;
	cin >> n_places >> height;
	for(int i = 0 ; i< n_places; ++i){
		cin >> current;
		if(current <= height){
			result++;
		}
	}
	cout << result;
}
