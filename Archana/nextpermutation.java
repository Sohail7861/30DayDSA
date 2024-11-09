import java.util.Arrays;

public class nextpermutation{
    public void nextPermutation(int[] nums) {
        int i = nums.length - 2;

        // Step 1: Find the largest index `i` where `nums[i] < nums[i + 1]`
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }

        if (i >= 0) { // Step 2: Find `j` and swap with `i`
            int j = nums.length - 1;
            while (nums[j] <= nums[i]) {
                j--;
            }
            swap(nums, i, j);
        }

        // Step 3: Reverse the elements from `i + 1` to the end
        reverse(nums, i + 1, nums.length - 1);
    }

    private void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }

    private void reverse(int[] nums, int start, int end) {
        while (start < end) {
            swap(nums, start, end);
            start++;
            end--;
        }
    }

    // Optional: Test the function
    public static void main(String[] args) {
        int[] nums = {1, 2, 3};
        nextpermutation np = new nextpermutation();
        np.nextPermutation(nums);
        System.out.println(Arrays.toString(nums)); // Output should be [1, 3, 2]
    }
}
