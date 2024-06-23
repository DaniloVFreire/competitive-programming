#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

int max(int a, int b) { return (a > b) ? a : b; }

/* Returns the best obtainable price for a rod of length n
   and price[] as prices of different pieces */
int best_rod_price(int price[], int index, int n)
{
    // base case
    if (index == 0) {
        return n * price[0];
    }
    // if n is 0 we cannot cut the rod anymore.
    if (n <= 0) {
	    return 0;
    }
  
    //At any index we have 2 options either
    //cut the rod of this length or not cut it
    int notCut = best_rod_price(price,index - 1,n);
    int cut = 0;
    int rod_length = index + 1;

    if (rod_length <= n)
        cut = price[index] + best_rod_price(price,index,n - rod_length);
  
    return max(notCut, cut);
}

int main()
{
    vector<int> prices{ 1, 5, 8, 9, 10, 17, 17, 20 };
    int size = prices.size();
    cout << "Maximum Obtainable Value is " << best_rod_price(prices, size - 1, size);
    getchar();
    return 0;
}
