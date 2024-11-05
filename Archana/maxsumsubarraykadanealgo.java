public class maxsumsubarraykadanealgo {
    
        public int maxSubArray(int[] nums) {
            // Initialize maxSum with the minimum possible integer value
            int maxSum = Integer.MIN_VALUE;
            int currentSum = 0;
            
            for (int num : nums) {
                currentSum += num;  // Add current element to currentSum
                
                // Update maxSum if currentSum is greater
                if (currentSum > maxSum) {
                    maxSum = currentSum;
                }
                
                // Reset currentSum to zero if it becomes negative
                if (currentSum < 0) {
                    currentSum = 0;
                }
            }
            
            return maxSum;
        }
    
        public static void main(String[] args) {
            maxsumsubarraykadanealgo solution = new maxsumsubarraykadanealgo();
            int[] nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
            System.out.println("Maximum Sum Subarray: " + solution.maxSubArray(nums));
        }
    }
    
    

