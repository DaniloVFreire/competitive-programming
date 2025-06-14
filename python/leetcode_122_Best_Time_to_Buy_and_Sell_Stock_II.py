import re
def decide_stocks(stock, pos, prices, money, dp):
    if pos >= len(prices):
        return money
    
    dp_key = f'{stock}{pos}'

    if dp_key in dp:
        return dp[dp_key]

    best_profit = money
    if stock != -1:
        profit = prices[pos] - stock
        curr_money = money + profit
        stock_sell = decide_stocks(-1, pos +1, prices, curr_money, dp)
        best_profit = max(stock_sell, best_profit)

    else:
        stock_buy = decide_stocks(prices[pos], pos+1, prices, money, dp)
        best_profit = max(stock_buy, best_profit)

    stock_wait = decide_stocks(stock, pos+1, prices, money, dp)
    best_profit = max(stock_wait, best_profit)
    
    if dp_key not in dp or dp[dp_key] < best_profit:
        dp[dp_key] = best_profit

    return dp[dp_key]

class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        dp = {}
        return decide_stocks(-1, 0, prices, 0, dp)

def read_input():
    return re.split(r'[ ,.\[\]]+', input())

        
if __name__ == '__main__':
    prices = read_input()
    print(prices)
    #solution = solution()
    #output_solution = solution.maxProfit(prices)
    #print(output_solution)
