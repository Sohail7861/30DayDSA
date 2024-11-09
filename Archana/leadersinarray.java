import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class leadersinarray{
    public List<Integer> findLeaders(int[] nums) {
        List<Integer> leaders = new ArrayList<>();
        int maxFromRight = nums[nums.length - 1];
        
        // The rightmost element is always a leader
        leaders.add(maxFromRight);
        
        // Traverse the array from right to left
        for (int i = nums.length - 2; i >= 0; i--) {
            if (nums[i] > maxFromRight) {
                maxFromRight = nums[i];
                leaders.add(maxFromRight);
            }
        }
        
        // The leaders are added in reverse order, so reverse the list
        Collections.reverse(leaders);
        return leaders;
    }

    // Optional: Test the function
    public static void main(String[] args) {
        leadersinarray lia = new leadersinarray();
        int[] nums = {16, 17, 4, 3, 5, 2};
        List<Integer> leaders = lia.findLeaders(nums);
        System.out.println(leaders); // Output should be [17, 5, 2]
    }
}
 