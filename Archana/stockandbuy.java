public class stockandbuy {
    
        public int maxProfit(int[] prices) {
            int minPrice = Integer.MAX_VALUE; // Initialize minPrice to a large value
            int maxProfit = 0; // Initialize maxProfit to 0
    
            // Iterate through the prices
            for (int price : prices) {
                // Update minPrice if the current price is lower
                if (price < minPrice) {
                    minPrice = price;
                }
                // Calculate potential profit
                int potentialProfit = price - minPrice;
                // Update maxProfit if the potential profit is greater
                if (potentialProfit > maxProfit) {
                    maxProfit = potentialProfit;
                }
            }
    
            return maxProfit; // Return the maximum profit found
        }
    
        public static void main(String[] args) {
            stockandbuy solution = new stockandbuy();
            int[] prices = {7, 1, 5, 3, 6, 4};
            int maxProfit = solution.maxProfit(prices);
            System.out.println("Maximum Profit: " + maxProfit);
        }
    }
     

