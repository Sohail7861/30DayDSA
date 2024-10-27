public class maxconsecutivenumbers {
    public static void main(String[] args) {
        int[] array = {1, 1, 0, 1, 1, 1, 0, 1, 1};

        int maxConsecutiveOnes = findMaxConsecutiveOnes(array);
        System.out.println("Maximum consecutive ones: " + maxConsecutiveOnes);
    }

    // Function to find the maximum number of consecutive 1s
    public static int findMaxConsecutiveOnes(int[] nums) {
        int maxCount = 0; // Stores the maximum consecutive ones found
        int count = 0;    // Temporary counter for consecutive ones

        for (int num : nums) {
            if (num == 1) {
                count++;             // Increment count if the current element is 1
                maxCount = Math.max(maxCount, count); // Update maxCount if needed
            } else {
                count = 0;           // Reset count if the current element is 0
            }
        }
        return maxCount;
    }
}

    

