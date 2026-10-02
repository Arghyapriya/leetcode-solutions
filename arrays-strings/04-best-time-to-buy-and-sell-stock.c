int maxProfit(int* prices, int pricesSize) {
    if (pricesSize <= 1) return 0;
    
    int minPrice = prices[0];
    int maxProfit = 0;
    
    for (int i = 1; i < pricesSize; i++) {
        // Update minPrice if we find a lower buying price
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } 
        // Otherwise, check if selling today yields a better profit
        else {
            int currentProfit = prices[i] - minPrice;
            if (currentProfit > maxProfit) {
                maxProfit = currentProfit;
            }
        }
    }
    
    return maxProfit;
}