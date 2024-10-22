public class largeelementinarray{

    // Function to find the largest element in the array
    public static int findLargest(int[] arr) {
        int max = arr[0];  // Initialize max as the first element

        // check array elements from the second element
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] > max) {
                max = arr[i];  // Update max if the current element is greater
            }
        }
        return max;
    }

    public static void main(String[] args) {
        int[] arr = {10, 20, 50, 30, 40};

        // Find the largest element in the array
        int largest = findLargest(arr);

        System.out.println("The largest element in the array is: " + largest);
    }
}
