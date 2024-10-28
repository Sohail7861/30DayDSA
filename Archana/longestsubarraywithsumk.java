public class longestsubarraywithsumk {
    public static int longestSubarrayWithSumK(int[] nums, int K) {
        int start = 0, end = 0;
        int currentSum = 0;
        int maxLength = 0;

        while (end < nums.length) {
            // Expand the window by adding nums[end] to currentSum
            currentSum += nums[end];

            // Shrink the window from the start if the sum exceeds K
            while (currentSum > K && start <= end) {
                currentSum -= nums[start];
                start++;
            }

            // Check if we found a subarray with the desired sum
            if (currentSum == K) {
                maxLength = Math.max(maxLength, end - start + 1);
            }

            end++;
        }

        return maxLength;
    }

    public static void main(String[] args) {
        int[] nums = {1, 2, 3, 7, 5};
        int K = 18;
        System.out.println("Length of the longest subarray with sum " + K + " is: " + longestSubarrayWithSumK(nums, K));
    }
}

    

