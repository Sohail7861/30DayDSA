public class LongestSubarrayWithSumKpositivesandnegativesbf{
    public static int longestSubarrayWithSumK(int[] nums, int K) {
        int maxLength = 0;

        // Iterate over all starting points of subarrays
        for (int start = 0; start < nums.length; start++) {
            int sum = 0;

            // Calculate sum for each subarray starting at 'start' and ending at 'end'
            for (int end = start; end < nums.length; end++) {
                sum += nums[end];

                // Check if the current sum equals K
                if (sum == K) {
                    maxLength = Math.max(maxLength, end - start + 1);
                }
            }
        }

        return maxLength;
    }

    public static void main(String[] args) {
        int[] nums = {1, -1, 5, -2, 3};
        int K = 3;
        System.out.println("Length of longest subarray with sum " + K + " is " + longestSubarrayWithSumK(nums, K));
    }
}
