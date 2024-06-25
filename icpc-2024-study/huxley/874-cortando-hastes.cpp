#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;

vector<ll> prices;
vector<vector<ll>> memo_best_prices;

ll max(ll a, ll b){
	return a > b ? a : b;
}

ll best_slice_price(ll rod_size ,ll rod_slice){
	if(rod_size<=0){
		return 0;
	}
	if(rod_slice - 1 <= 0){
		return prices[0] * rod_size;
	}
	if(memo_best_prices[rod_size-1][rod_slice-1] != -1){
//		cout << "memo_best_prices: "<< memo_best_prices[rod_size-1][rod_slice-1] << " rod_size-1: " << rod_size-1 << " rod_slice-1: " << rod_slice -1 <<"\n";
		return memo_best_prices[rod_size-1][rod_slice-1];
	}
	ll sliced_price = best_slice_price(rod_size, rod_slice -1);	
	ll current_price = 0;
	if(rod_size >= rod_slice ){
		current_price = prices[rod_slice-1] + best_slice_price(rod_size - rod_slice, rod_slice);

	}
	memo_best_prices[rod_size-1][rod_slice-1] = max(sliced_price, current_price);
//	cout << "max(sliced_price, current_price): "<<  max(sliced_price, current_price) << "memo_best_prices" << memo_best_prices[rod_size-1][rod_slice-1] << " rod_size-1: " << rod_size-1 << " rod_slice-1: " << rod_slice -1 << " sliced_price "<< sliced_price << " current_price " << current_price <<"\n";
	return memo_best_prices[rod_size-1][rod_slice-1]; 
}

int main(){
	ll size = 0;
	cin >> size;
	prices.resize(size,0);
	memo_best_prices.resize(size, vector<ll>(size,-1));
	while(size){
		int index = 0;
		while(index < size){
			cin >> prices[index];
		//	cout << prices[index] << " " << index << " " << size << "\n";
			index += 1;
		}
		
		cout << best_slice_price(size, size) << "\n";
		cin >> size;
	}
	return 0;
}
