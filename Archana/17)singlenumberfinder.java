public class singlenumberfinder{
    public static int findSingleNumber(int[] nums) {
        int unique = 0;
        for (int num : nums) {
            unique ^= num;
        }
        return unique;
    }

    public static void main(String[] args) {
        int[] nums = {4, 3, 2, 4, 2};
        System.out.println("The number that appears once is: " + findSingleNumber(nums));
    }
}
