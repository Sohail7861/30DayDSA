import java.util.HashSet;

    public class longestconsecutivesequence {
        public int longestConsecutive(int[] nums) {
            if (nums.length == 0) {
                return 0;
            }
    
            HashSet<Integer> numSet = new HashSet<>();
            for (int num : nums) {
                numSet.add(num);
            }
    
            int longestStreak = 0;
    
            for (int num : numSet) {
                // Check if it is the start of a sequence
                if (!numSet.contains(num - 1)) {
                    int currentNum = num;
                    int currentStreak = 1;
    
                    // Count the streak length
                    while (numSet.contains(currentNum + 1)) {
                        currentNum += 1;
                        currentStreak += 1;
                    }
    
                    longestStreak = Math.max(longestStreak, currentStreak);
                }
            }
    
            return longestStreak;
        }
    
        // Optional: Test the function
        public static void main(String[] args) {
            longestconsecutivesequence lcs = new longestconsecutivesequence();
            int[] nums = {100, 4, 200, 1, 3, 2};
            System.out.println(lcs.longestConsecutive(nums)); // Output should be 4 for the sequence [1, 2, 3, 4]
        }
    }
    
    

