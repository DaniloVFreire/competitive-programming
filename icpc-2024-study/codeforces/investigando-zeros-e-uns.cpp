#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll bin_size;
	ll ones = 0;
	cin >> bin_size;
	vector<ll> bin = vector<ll>(bin_size, 0);
	for(ll i=0; i < bin.size();++i){
		cin >> bin[i];
		if(bin[i] == 1){
			++ones;
		}
	}
	ll count = ones%2 == 0 ? 0 : 1;
	ll bini = bin_size -1;
	ll iones = ones;
	ll dif = 0;
	ll cones = 0;
	ll start = 0;
	ll end = 0;
	for(ll win=bini; win >=0; --win){
		dif = bin_size - win;
		cones = iones - bin[win];
		iones = cones;
		for(ll mov = 0; mov < dif; ++mov){
			start = mov -1 >0?bin[mov-1]:0;
			end= bin[win+mov];
			cones = cones + end - start;
			if(cones%2 != 0){
				count ++;
			}
		}
		
	}
	cout<<count<<"\n";



	return 0;
}
