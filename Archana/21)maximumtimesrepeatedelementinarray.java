public class maximumtimesrepeatedelementinarray {
    // type of voting system evariki ekkuva votes
    
        public int majorityElement(int[] nums) {
            int candidate = nums[0];
            int count = 0;
            
            // Step 1: Find a candidate
            for (int num : nums) {
                if (count == 0) {
                    candidate = num;  //  new candidate
                }
                count += (num == candidate) ? 1 : -1;
            }
            
            // Since the problem guarantees that a majority element exists, we return the candidate directly.
            return candidate;
        }
    
        public static void main(String[] args) {
            maximumtimesrepeatedelementinarray solution = new maximumtimesrepeatedelementinarray();
            int[] nums = {3, 2, 3};
            System.out.println("Majority element: " + solution.majorityElement(nums));
        }
    }
    
    

